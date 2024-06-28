#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR4 FUN2(VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR5 FUN4(VAR3);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
