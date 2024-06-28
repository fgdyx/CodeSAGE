#ifndef VAR1
static void FUN1()
{
 char VAR2;
 char *VAR3 = &VAR2;
 char *VAR4 = &VAR2;
 VAR2 = '';
 {
 char VAR2 = *VAR3;
 VAR2 = 2;
 *VAR3 = VAR2;
 }
 {
 char VAR2 = *VAR4;
 {
 char VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 char VAR2;
 char *VAR3 = &VAR2;
 char *VAR4 = &VAR2;
 VAR2 = '';
 {
 char VAR2 = *VAR3;
 VAR2 = (char)FUN4();
 *VAR3 = VAR2;
 }
 {
 char VAR2 = *VAR4;
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR6))
 {
 char VAR5 = VAR2 * VAR2;
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
