#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char * VAR5 = (char *)FUN4((10)*sizeof(char));
 char * VAR6 = (char *)FUN4((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = '';
 FUN1(VAR2);
}
#endif
