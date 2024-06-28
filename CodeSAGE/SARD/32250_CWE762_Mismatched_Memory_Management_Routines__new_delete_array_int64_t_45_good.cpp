#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 delete [] VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR4 = VAR3;
 FUN1();
}
static void FUN3()
{
 VAR2 * VAR3 = VAR5;
 delete VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR5 = VAR3;
 FUN3();
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
