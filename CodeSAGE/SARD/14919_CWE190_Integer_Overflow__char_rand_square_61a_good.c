#ifndef VAR1
char FUN1(char VAR2);
static void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN1(VAR2);
 {
 char VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
}
char FUN4(char VAR2);
static void FUN5()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN4(VAR2);
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR4))
 {
 char VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 else
 {
 FUN8("");
 }
}
void FUN9()
{
 FUN2();
 FUN5();
}
#endif
