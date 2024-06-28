#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 FUN1(VAR2);
}
void FUN3(int * VAR2);
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(100, sizeof(int));
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
