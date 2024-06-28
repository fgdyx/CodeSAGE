#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 {
 short VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
}
void FUN3(short VAR2[])
{
 short VAR3 = VAR2[2];
 if (FUN4((long)VAR3) <= (long)FUN5((double)VAR5))
 {
 short VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 else
 {
 FUN6("");
 }
}
#endif
