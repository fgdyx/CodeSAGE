#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR4 < 10)
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
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
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR4 >= 0 && VAR4 < (10))
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
