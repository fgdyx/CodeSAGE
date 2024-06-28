#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = FUN2();
 goto VAR4;
VAR4:
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR5[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = 7;
 goto VAR4;
VAR4:
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN3(VAR5[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
