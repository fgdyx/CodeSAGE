#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new int[100];
 delete [] VAR2;
 }
 else
 {
 VAR2 = new int[100];
 delete [] VAR2;
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new int[100];
 }
 else
 {
 VAR2 = new int[100];
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
