#ifndef VAR1
void FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
void FUN3(int VAR2);
static void FUN4()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN5(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
