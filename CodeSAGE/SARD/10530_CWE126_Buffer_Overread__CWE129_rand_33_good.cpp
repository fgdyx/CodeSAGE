#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = 7;
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
}
static void FUN4()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = FUN5();
 {
 int VAR2 = VAR3;
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
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
