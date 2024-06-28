#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 }
 if(FUN2())
 {
 delete VAR2;
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = new long[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
 }
}
static void FUN7()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
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
