#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new int;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new int;
 }
 if(1)
 {
 delete VAR2;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new int[100];
 }
 if(1)
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new int[100];
 }
 if(1)
 {
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
