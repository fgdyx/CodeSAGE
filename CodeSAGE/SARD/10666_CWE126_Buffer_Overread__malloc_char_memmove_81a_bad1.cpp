#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (char *)malloc(50*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
