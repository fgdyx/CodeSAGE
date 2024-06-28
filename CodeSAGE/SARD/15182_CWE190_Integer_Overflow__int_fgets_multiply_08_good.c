#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN6(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN6(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = 0;
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 if(VAR2 > 0)
 {
 int VAR6 = VAR2 * 2;
 FUN6(VAR6);
 }
 }
}
static void FUN9()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 if(VAR2 > 0)
 {
 int VAR6 = VAR2 * 2;
 FUN6(VAR6);
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
