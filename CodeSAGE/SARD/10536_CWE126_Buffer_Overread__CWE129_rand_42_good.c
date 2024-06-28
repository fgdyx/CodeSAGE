#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 7;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
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
static int FUN5(int VAR2)
{
 VAR2 = FUN6();
 return VAR2;
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN5(VAR2);
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
 FUN7();
 FUN2();
}
#endif
