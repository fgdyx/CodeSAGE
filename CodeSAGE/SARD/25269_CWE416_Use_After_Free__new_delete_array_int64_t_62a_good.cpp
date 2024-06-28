#ifndef VAR1
void FUN1(VAR2 * &VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 FUN3(VAR3[0]);
}
void FUN4(VAR2 * &VAR3);
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN4(VAR3);
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
