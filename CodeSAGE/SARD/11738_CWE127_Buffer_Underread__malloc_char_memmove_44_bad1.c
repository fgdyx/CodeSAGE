#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memmove(VAR3, VAR2, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 VAR2 = NULL;
 {
 char * VAR6 = (char *)malloc(100*sizeof(char));
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR6 - 8;
 }
 FUN4(VAR2);
}
#endif
