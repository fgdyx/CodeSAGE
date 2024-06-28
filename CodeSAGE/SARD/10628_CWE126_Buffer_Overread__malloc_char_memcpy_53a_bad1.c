#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (char *)malloc(50*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN1(VAR2);
}
#endif
