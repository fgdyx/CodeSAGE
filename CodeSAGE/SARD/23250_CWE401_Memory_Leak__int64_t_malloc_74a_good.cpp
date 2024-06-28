#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN4(VAR5[0]);
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
void FUN5(VAR2<int, VAR3 *> VAR4);
static void FUN6()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN4(VAR5[0]);
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN5(VAR4);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
