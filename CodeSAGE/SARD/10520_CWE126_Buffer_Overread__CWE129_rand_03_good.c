#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 VAR2 = FUN2();
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN4(VAR3[VAR2]);
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
 VAR2 = -1;
 if(5==5)
 {
 VAR2 = FUN2();
 }
 if(5==5)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN4(VAR3[VAR2]);
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
 VAR2 = -1;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 7;
 }
 if(5==5)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN4(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 VAR2 = 7;
 }
 if(5==5)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN4(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
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
