#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(VAR4)
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
 if(VAR3)
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(VAR3)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 int VAR5;
 VAR2 = &VAR5;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 int VAR5;
 VAR2 = &VAR5;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(VAR3)
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
