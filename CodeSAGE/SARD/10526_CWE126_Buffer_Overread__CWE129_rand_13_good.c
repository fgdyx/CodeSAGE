#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN4(VAR4[VAR2]);
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
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3==5)
 {
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN4(VAR4[VAR2]);
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
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 7;
 }
 if(VAR3==5)
 {
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN4(VAR4[VAR2]);
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
 if(VAR3==5)
 {
 VAR2 = 7;
 }
 if(VAR3==5)
 {
 {
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN4(VAR4[VAR2]);
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
