#ifndef VAR1
long * FUN1(long * VAR2)
{
 VAR2 = new long;
 return VAR2;
}
long * FUN2(long * VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
 return VAR2;
}
#endif
