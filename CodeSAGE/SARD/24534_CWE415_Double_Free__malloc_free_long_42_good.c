#ifndef VAR1
static long * FUN1(long * VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
 return VAR2;
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 free(VAR2);
}
static long * FUN3(long * VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
 free(VAR2);
 return VAR2;
}
static void FUN4()
{
 long * VAR2;
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
