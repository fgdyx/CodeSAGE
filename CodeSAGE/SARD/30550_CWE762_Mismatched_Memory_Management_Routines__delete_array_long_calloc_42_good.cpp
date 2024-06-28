#ifndef VAR1
static long * FUN1(long * VAR2)
{
 VAR2 = new long[100];
 return VAR2;
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 delete [] VAR2;
}
static long * FUN3(long * VAR2)
{
 VAR2 = (long *)calloc(100, sizeof(long));
 return VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN3(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
