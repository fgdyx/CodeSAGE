#ifndef VAR1
void FUN1(VAR2<short> VAR3);
static void FUN2()
{
 short VAR4;
 VAR2<short> VAR3;
 VAR4 = 0;
 VAR4 = 2;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4(VAR2<short> VAR3);
static void FUN5()
{
 short VAR4;
 VAR2<short> VAR3;
 VAR4 = 0;
 VAR4 = (short)FUN6();
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
