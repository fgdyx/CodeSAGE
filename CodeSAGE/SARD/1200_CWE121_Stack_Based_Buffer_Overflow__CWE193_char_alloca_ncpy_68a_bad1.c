#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3((10)*sizeof(char));
 char * VAR4 = (char *)FUN3((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = '';
 VAR5 = VAR2;
 FUN1();
}
#endif
