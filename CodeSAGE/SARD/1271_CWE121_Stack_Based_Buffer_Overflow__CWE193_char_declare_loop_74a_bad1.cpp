#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char VAR5[10];
 char VAR6[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR4 = VAR5;
 VAR4[0] = '';
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
