#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 int VAR4[10] = { 0 };
 if (VAR3 < 10)
 {
 FUN2(VAR4[VAR3]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 int VAR4[10] = { 0 };
 if (VAR3 >= 0 && VAR3 < (10))
 {
 FUN2(VAR4[VAR3]);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
