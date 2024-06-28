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
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
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
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN6(VAR5);
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
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
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
