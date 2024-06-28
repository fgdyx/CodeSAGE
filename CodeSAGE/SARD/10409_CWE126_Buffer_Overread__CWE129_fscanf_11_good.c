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
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN5(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
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
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN5(VAR3[VAR2]);
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
 VAR2 = -1;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN5(VAR3[VAR2]);
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
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN5(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
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
