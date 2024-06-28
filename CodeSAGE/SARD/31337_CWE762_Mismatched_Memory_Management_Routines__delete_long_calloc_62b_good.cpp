#ifndef VAR1
void FUN1(long * &VAR2)
{
 VAR2 = new long;
}
void FUN2(long * &VAR2)
{
 VAR2 = (long *)calloc(100, sizeof(long));
}
#endif
