#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = new VAR3;
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
void FUN4(VAR2<VAR3 *> VAR4);
static void FUN5()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = NULL;
 VAR5 = (VAR3 *)realloc(VAR5, 100*sizeof(VAR3));
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN4(VAR4);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
