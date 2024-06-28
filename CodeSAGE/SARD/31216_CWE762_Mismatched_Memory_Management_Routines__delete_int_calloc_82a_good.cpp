#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR3* VAR4 = new VAR6;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
