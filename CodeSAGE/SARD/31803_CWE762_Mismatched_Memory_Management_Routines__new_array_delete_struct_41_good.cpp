#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 delete VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 FUN1(VAR3);
}
static void FUN3(VAR2 * VAR3)
{
 delete [] VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 FUN3(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
