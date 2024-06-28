#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
static void FUN4(int VAR2)
{
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR4))
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN9(VAR5);
 }
 else
 {
 FUN7("");
 }
 }
 FUN4(VAR2);
}
void FUN10()
{
 FUN8();
 FUN3();
}
#endif
