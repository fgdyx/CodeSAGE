#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 if(5==5)
 {
 VAR2 = NULL;
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 int * VAR2;
 if(5==5)
 {
 VAR2 = NULL;
 }
 if(5==5)
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 int * VAR2;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3 = 5;
 VAR2 = &VAR3;
 }
 }
 if(5==5)
 {
 FUN3(*VAR2);
 }
}
static void FUN6()
{
 int * VAR2;
 if(5==5)
 {
 {
 int VAR3 = 5;
 VAR2 = &VAR3;
 }
 }
 if(5==5)
 {
 FUN3(*VAR2);
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
