#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(0)
 {
 FUN3("");
 }
 else
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 if(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(1)
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 if(0)
 {
 FUN3("");
 }
 else
 {
 VAR2 = -2;
 }
 if(1)
 {
 if(VAR2 < 0)
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 if(1)
 {
 VAR2 = -2;
 }
 if(1)
 {
 if(VAR2 < 0)
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
