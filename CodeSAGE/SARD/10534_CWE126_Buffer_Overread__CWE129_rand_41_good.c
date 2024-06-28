#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 FUN1(VAR2);
}
static void FUN5(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN7();
 FUN5(VAR2);
}
void FUN8()
{
 FUN6();
 FUN4();
}
#endif
