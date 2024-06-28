#ifndef VAR1
void FUN1(VAR2<short> VAR3);
static void FUN2()
{
 short VAR4;
 VAR2<short> VAR3;
 VAR4 = 0;
 VAR4 = 100-1;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
