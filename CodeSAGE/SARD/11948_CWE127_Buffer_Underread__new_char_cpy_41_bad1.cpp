#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100*2];
 memset(VAR3, '', 100*2-1);
 VAR3[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR3, VAR2);
 FUN2(VAR3);
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 FUN1(VAR2);
}
#endif
