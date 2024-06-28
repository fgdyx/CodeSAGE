#ifndef VAR1
void FUN1(int * &VAR2)
{
 VAR2 = new int[100];
}
void FUN2(int * &VAR2)
{
 VAR2 = (int *)calloc(100, sizeof(int));
}
#endif
