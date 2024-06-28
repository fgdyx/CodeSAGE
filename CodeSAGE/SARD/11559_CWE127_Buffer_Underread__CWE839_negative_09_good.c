#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 VAR2 = -5;
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR5[VAR2]);
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
 if(VAR3)
 {
 VAR2 = -5;
 }
 if(VAR3)
 {
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN3(VAR5[VAR2]);
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
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 7;
 }
 if(VAR3)
 {
 {
 int VAR5[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN3(VAR5[VAR2]);
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
 if(VAR3)
 {
 VAR2 = 7;
 }
 if(VAR3)
 {
 {
 int VAR5[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN3(VAR5[VAR2]);
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
