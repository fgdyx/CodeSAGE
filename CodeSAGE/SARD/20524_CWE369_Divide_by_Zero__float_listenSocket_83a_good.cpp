#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR3 FUN2(VAR2);
}
static void FUN3()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR4 FUN4(VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
