#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
