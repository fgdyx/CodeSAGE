#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5[10] = { 0 };
 if (VAR4 >= 0)
 {
 FUN2(VAR5[VAR4]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5[10] = { 0 };
 if (VAR4 >= 0 && VAR4 < (10))
 {
 FUN2(VAR5[VAR4]);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
