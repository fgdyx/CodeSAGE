#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5 = VAR4 - 1;
 FUN3(VAR5);
 }
}
void FUN4(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 if (VAR4 > VAR6)
 {
 int VAR5 = VAR4 - 1;
 FUN3(VAR5);
 }
 else
 {
 FUN5("");
 }
}
#endif
