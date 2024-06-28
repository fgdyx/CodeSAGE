#ifndef VAR1
int * FUN1(int * VAR2)
{
 VAR2 = new int[100];
 return VAR2;
}
int * FUN2(int * VAR2)
{
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 return VAR2;
}
#endif
