#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN5();
 VAR4 = VAR2;
 FUN2();
}
void FUN6()
{
 FUN3();
 FUN4();
}
#endif
