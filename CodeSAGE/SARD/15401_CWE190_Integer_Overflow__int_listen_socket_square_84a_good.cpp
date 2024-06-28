#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 VAR3 * VAR4 = new FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR5 * VAR6 = new FUN4(VAR2);
 delete VAR6;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
