#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 FUN3(VAR4);
 FUN4("");
}
void FUN5(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 if (VAR4 > 0 && VAR4 <= 2000)
 {
 FUN3(VAR4);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
}
#endif
