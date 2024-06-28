#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 int VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
void FUN3(int VAR2[])
{
 int VAR3 = VAR2[2];
 if (VAR3 > VAR5)
 {
 int VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
