#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN4(VAR5[0]);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN1(VAR4);
}
void FUN6(VAR2<VAR3 *> VAR4);
static void FUN7()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN4(VAR5[0]);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN6(VAR4);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
