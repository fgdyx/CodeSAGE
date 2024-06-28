#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3((10)*sizeof(char));
 char * VAR6 = (char *)FUN3((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR4 = VAR5;
 VAR4[0] = '';
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
