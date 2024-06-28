#ifndef VAR1
void FUN1(int * &VAR2)
{
 VAR2 = new int[100];
}
void FUN2(int * &VAR2)
{
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
}
#endif
