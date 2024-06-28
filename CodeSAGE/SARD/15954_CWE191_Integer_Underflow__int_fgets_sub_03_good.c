#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(5==5)
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
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 if (VAR2 > VAR5)
 {
 int VAR6 = VAR2 - 1;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 if(5==5)
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
 if(5==5)
 {
 if (VAR2 > VAR5)
 {
 int VAR6 = VAR2 - 1;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = -2;
 }
 if(5==5)
 {
 {
 int VAR6 = VAR2 - 1;
 FUN4(VAR6);
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 if(5==5)
 {
 VAR2 = -2;
 }
 if(5==5)
 {
 {
 int VAR6 = VAR2 - 1;
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
