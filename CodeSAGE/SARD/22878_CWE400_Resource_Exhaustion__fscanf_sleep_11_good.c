#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN5(VAR2);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN5(VAR2);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 FUN5(VAR2);
 FUN4("");
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 FUN5(VAR2);
 FUN4("");
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
