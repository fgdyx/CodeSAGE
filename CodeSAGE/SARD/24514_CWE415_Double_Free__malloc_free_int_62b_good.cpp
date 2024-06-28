#ifndef VAR1
void FUN1(int * &VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
}
void FUN2(int * &VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
}
#endif
