#ifndef VAR1
static void FUN1(char * &VAR2)
{
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
#endif
