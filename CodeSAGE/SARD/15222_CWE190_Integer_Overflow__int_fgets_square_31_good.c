#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 {
 int VAR3 = VAR2;
 int VAR2 = VAR3;
 {
 int VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN4(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 {
 int VAR3 = VAR2;
 int VAR2 = VAR3;
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR7))
 {
 int VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN8()
{
 FUN1();
 FUN3();
}
#endif
