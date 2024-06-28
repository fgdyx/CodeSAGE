#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(5==5)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 int VAR3;
 VAR2 = &VAR3;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(5==5)
 {
 ;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 int VAR3;
 VAR2 = &VAR3;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(5==5)
 {
 ;
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
