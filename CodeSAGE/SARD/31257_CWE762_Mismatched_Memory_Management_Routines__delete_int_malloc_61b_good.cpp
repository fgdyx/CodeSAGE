#ifndef VAR1
int * FUN1(int * VAR2)
{
 VAR2 = new int;
 return VAR2;
}
int * FUN2(int * VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
 return VAR2;
}
#endif
