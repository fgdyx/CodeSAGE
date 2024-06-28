#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long;
 delete VAR2;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long;
 delete VAR2;
 }
 if(1)
 {
 ;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new long;
 }
 if(1)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long;
 }
 if(1)
 {
 delete VAR2;
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
