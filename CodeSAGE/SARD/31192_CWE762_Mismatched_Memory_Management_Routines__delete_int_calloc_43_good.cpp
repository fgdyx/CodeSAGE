#ifndef VAR1
static void FUN1(int * &VAR2)
{
 VAR2 = new int;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 delete VAR2;
}
static void FUN3(int * &VAR2)
{
 VAR2 = (int *)calloc(100, sizeof(int));
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
