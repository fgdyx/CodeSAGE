#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 VAR2 = 2;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 int VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 VAR2 = FUN4();
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR6))
 {
 int VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 else
 {
 FUN7("");
 }
 }
}
void FUN8()
{
 FUN1();
 FUN3();
}
#endif
