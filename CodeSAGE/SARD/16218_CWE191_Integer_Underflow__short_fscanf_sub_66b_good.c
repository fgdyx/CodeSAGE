#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 {
 short VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
void FUN3(short VAR2[])
{
 short VAR3 = VAR2[2];
 if (VAR3 > VAR5)
 {
 short VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
