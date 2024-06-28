#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char[100];
 delete [] VAR2;
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
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char[100];
 delete [] VAR2;
 }
 if(1)
 {
 ;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char[100];
 }
 if(1)
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char[100];
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
