#ifndef VAR1
void FUN1(int * VAR2);
void FUN2(int * VAR2);
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 FUN1(VAR2);
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 delete VAR2;
 FUN2(VAR2);
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
