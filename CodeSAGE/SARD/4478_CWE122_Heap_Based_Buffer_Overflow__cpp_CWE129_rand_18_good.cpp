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
 int VAR5;
 int * VAR6 = new int[10];
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR6;
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
 int VAR5;
 int * VAR6 = new int[10];
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR6;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
