#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = fopen("", "");
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN1(VAR4);
}
void FUN5()
{
 FUN2();
}
#endif
