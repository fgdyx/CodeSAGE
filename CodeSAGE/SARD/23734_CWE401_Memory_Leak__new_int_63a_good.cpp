#ifndef VAR1
void FUN1(int * * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 int VAR3;
 VAR2 = &VAR3;
 *VAR2 = 5;
 FUN3(*VAR2);
 FUN1(&VAR2);
}
void FUN4(int * * VAR2);
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 *VAR2 = 5;
 FUN3(*VAR2);
 FUN4(&VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
