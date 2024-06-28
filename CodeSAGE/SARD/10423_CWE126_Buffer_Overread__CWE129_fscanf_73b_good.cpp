#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5[10] = { 0 };
 if (VAR4 >= 0)
 {
 FUN3(VAR5[VAR4]);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5[10] = { 0 };
 if (VAR4 >= 0 && VAR4 < (10))
 {
 FUN3(VAR5[VAR4]);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
