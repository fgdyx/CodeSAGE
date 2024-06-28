#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
VAR4 * FUN1(VAR4 * VAR5);
static void FUN2()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR2 = 0;
 VAR5 = FUN1(VAR5);
 FUN3(*VAR5);
 free(VAR5);
}
VAR4 * FUN4(VAR4 * VAR5);
static void FUN5()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR3 = 1;
 VAR5 = FUN4(VAR5);
 FUN3(*VAR5);
 free(VAR5);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
