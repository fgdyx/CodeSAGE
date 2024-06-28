#ifndef VAR1
int * FUN1(int * VAR2)
{
 VAR2 = (int *)FUN2(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 return VAR2;
}
int * FUN4(int * VAR2)
{
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 return VAR2;
}
#endif
