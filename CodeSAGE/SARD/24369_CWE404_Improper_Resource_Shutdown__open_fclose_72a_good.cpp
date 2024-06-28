#ifndef VAR1
void FUN1(VAR2<int> VAR3);
static void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 VAR4 = FUN3("", VAR5|VAR6, VAR7|VAR8);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
void FUN6()
{
 FUN2();
}
#endif
