#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 FUN2(VAR3);
 FUN3("");
}
void FUN4(int VAR2[])
{
 int VAR3 = VAR2[2];
 if (VAR3 > 0 && VAR3 <= 2000)
 {
 FUN2(VAR3);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
}
#endif
