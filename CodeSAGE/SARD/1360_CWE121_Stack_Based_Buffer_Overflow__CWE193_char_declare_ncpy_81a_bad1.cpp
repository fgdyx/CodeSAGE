#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = '';
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
#endif
