#ifndef VAR1
static void FUN1(int &VAR2)
{
 VAR2 = 2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 {
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
}
static void FUN4(int &VAR2)
{
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN5(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 FUN4(VAR2);
 if (FUN8((long)VAR2) <= (long)FUN9((double)VAR6))
 {
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
}
void FUN10()
{
 FUN2();
 FUN7();
}
#endif
