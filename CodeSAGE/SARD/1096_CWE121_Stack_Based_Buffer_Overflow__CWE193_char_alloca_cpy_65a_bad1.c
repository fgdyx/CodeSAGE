#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char * VAR5 = (char *)FUN3((10)*sizeof(char));
 char * VAR6 = (char *)FUN3((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = '';
 FUN4(VAR2);
}
#endif
