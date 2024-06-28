#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = -5;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = -5;
 }
 if(1)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 7;
 }
 if(1)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = 7;
 }
 if(1)
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
