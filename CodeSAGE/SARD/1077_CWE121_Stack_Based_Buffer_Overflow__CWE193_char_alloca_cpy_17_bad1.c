#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2((10)*sizeof(char));
 char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR3, VAR6);
 FUN3(VAR3);
 }
}
#endif
