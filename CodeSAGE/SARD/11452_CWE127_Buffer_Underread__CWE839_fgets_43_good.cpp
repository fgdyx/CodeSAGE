#ifndef VAR1
static void FUN1(int &VAR2)
{
 VAR2 = 7;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 int VAR3[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5(int &VAR2)
{
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN6(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 FUN5(VAR2);
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
