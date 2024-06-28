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
 if (VAR2 >= 0)
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
 VAR2 = 10;
}
static void FUN6()
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
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
