#ifndef VAR1
void FUN1(short * VAR2)
{
 short VAR3 = *VAR2;
 if(VAR3 > 0)
 {
 short VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
void FUN3(short * VAR2)
{
 short VAR3 = *VAR2;
 if(VAR3 > 0)
 {
 if (VAR3 < (VAR5/2))
 {
 short VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
