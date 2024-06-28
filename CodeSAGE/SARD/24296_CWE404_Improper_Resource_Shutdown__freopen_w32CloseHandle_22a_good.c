#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
void FUN1(VAR4 * VAR5);
static void FUN2()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = FUN3("","",stdin);
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN4(VAR4 * VAR5);
static void FUN5()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = FUN3("","",stdin);
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
