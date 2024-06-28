#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR5 = (char *)malloc(100*sizeof(char));
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
