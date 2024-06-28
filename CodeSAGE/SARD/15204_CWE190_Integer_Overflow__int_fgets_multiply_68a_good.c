#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN5(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
 VAR6 = VAR2;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN4();
}
#endif
