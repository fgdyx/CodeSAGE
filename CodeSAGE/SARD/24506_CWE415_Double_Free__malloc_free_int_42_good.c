#ifndef VAR1
static int * FUN1(int * VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
 return VAR2;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 free(VAR2);
}
static int * FUN3(int * VAR2)
{
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
 return VAR2;
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN3(VAR2);
 ;
}
void FUN5()
{
 FUN4();
 FUN2();
}
#endif
