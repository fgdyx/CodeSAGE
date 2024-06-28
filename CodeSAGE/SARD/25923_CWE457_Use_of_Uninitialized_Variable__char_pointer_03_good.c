#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 if(5==5)
 {
 ;
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = "";
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 if(5==5)
 {
 ;
 }
 if(5==5)
 {
 VAR2 = "";
 FUN2(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = "";
 }
 if(5==5)
 {
 FUN2(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 if(5==5)
 {
 VAR2 = "";
 }
 if(5==5)
 {
 FUN2(VAR2);
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
