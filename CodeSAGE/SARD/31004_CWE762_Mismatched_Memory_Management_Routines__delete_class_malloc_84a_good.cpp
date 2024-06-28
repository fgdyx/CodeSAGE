#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR4 * VAR5 = new FUN2(VAR3);
 delete VAR5;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR6 * VAR7 = new FUN4(VAR3);
 delete VAR7;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
