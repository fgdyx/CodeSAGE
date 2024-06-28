#ifndef VAR1
static void FUN1()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 VAR2 = 2;
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 {
 short VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 VAR2 = VAR6;
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR6))
 {
 short VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN3();
}
#endif
