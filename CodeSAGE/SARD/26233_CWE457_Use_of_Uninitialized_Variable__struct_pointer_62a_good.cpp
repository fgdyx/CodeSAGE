#ifndef VAR1
void FUN1(VAR2 * &VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 FUN1(VAR3);
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
}
void FUN4(VAR2 * &VAR3);
static void FUN5()
{
 VAR2 * VAR3;
 FUN4(VAR3);
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
