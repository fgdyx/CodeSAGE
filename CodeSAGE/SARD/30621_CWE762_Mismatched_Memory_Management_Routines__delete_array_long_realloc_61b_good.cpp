#ifndef VAR1
long * FUN1(long * VAR2)
{
 VAR2 = new long[100];
 return VAR2;
}
long * FUN2(long * VAR2)
{
 VAR2 = NULL;
 VAR2 = (long *)realloc(VAR2, 100*sizeof(long));
 return VAR2;
}
#endif
