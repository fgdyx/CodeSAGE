#ifndef VAR1
void FUN1(VAR2<int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR4 = FUN3();
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
