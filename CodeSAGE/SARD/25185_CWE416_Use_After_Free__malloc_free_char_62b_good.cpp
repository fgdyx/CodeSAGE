#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
}
void FUN2(char * &VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 free(VAR2);
}
#endif
