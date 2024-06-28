#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 FUN2(VAR2);
 FUN3("");
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN5(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN2(VAR2);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
