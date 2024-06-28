#ifndef VAR1
void FUN1(long * &VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
}
void FUN2(long * &VAR2)
{
 VAR2 = new long[100];
}
#endif
