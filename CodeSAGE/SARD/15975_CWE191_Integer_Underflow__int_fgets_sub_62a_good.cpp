#ifndef VAR1
void FUN1(int &VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 {
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
}
void FUN4(int &VAR2);
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 FUN4(VAR2);
 if (VAR2 > VAR4)
 {
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
