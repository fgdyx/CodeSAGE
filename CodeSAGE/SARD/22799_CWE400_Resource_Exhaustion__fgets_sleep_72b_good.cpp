#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 FUN2(VAR4);
 FUN3("");
}
void FUN4(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 if (VAR4 > 0 && VAR4 <= 2000)
 {
 FUN2(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
}
#endif
