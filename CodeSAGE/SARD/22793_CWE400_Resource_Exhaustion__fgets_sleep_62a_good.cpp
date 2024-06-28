#ifndef VAR1
void FUN1(int &VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 FUN3(VAR2);
 FUN4("");
}
void FUN5(int &VAR2);
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 FUN5(VAR2);
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN3(VAR2);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
