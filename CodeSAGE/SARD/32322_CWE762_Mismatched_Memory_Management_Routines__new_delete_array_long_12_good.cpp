#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 }
 else
 {
 VAR2 = new long;
 }
 if(FUN2())
 {
 delete VAR2;
 }
 else
 {
 delete VAR2;
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long[100];
 }
 else
 {
 VAR2 = new long[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
 }
 else
 {
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
