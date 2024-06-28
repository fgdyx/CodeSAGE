#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
void FUN3(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 if (VAR4 > VAR6)
 {
 int VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
}
#endif
