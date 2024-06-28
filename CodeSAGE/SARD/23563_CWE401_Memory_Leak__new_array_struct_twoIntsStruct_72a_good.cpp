#ifndef VAR1
void FUN1(VAR2<struct VAR3 *> VAR4);
static void FUN2()
{
 struct VAR3 * VAR5;
 VAR2<struct VAR3 *> VAR4;
 VAR5 = NULL;
 struct _twoIntsStruct VAR6[100];
 VAR5 = VAR6;
 VAR5[0].VAR7 = 0;
 VAR5[0].VAR8 = 0;
 FUN3((VAR9 *)&VAR5[0]);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN1(VAR4);
}
void FUN6(VAR2<struct VAR3 *> VAR4);
static void FUN7()
{
 struct VAR3 * VAR5;
 VAR2<struct VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = new struct VAR3[100];
 VAR5[0].VAR7 = 0;
 VAR5[0].VAR8 = 0;
 FUN3((VAR9 *)&VAR5[0]);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN6(VAR4);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
