#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = 10;
 goto VAR4;
VAR4:
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR5[VAR2]);
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
 goto VAR3;
VAR3:
 VAR2 = 7;
 goto VAR4;
VAR4:
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN2(VAR5[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
