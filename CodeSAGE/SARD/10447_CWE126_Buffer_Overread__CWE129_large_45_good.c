#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN2(VAR4[VAR2]);
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
 VAR3 = VAR2;
 FUN1();
}
static void FUN5()
{
 int VAR2 = VAR5;
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR4[VAR2]);
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
 VAR2 = 10;
 VAR5 = VAR2;
 FUN5();
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
