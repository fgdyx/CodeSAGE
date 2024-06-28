#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN4(VAR2);
 FUN3("");
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
 VAR2 = -1;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3==5)
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN4(VAR2);
 FUN3("");
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
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 FUN4(VAR2);
 FUN3("");
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 FUN4(VAR2);
 FUN3("");
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
