#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = '';
 FUN1(VAR2);
}
#endif
