#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR3 FUN2(VAR2);
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR4 FUN4(VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
