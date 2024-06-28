#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new long;
 *VAR2 = 5L;
 delete VAR2;
 }
 if(VAR3!=5)
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
 if(VAR3==5)
 {
 VAR2 = new long;
 *VAR2 = 5L;
 delete VAR2;
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new long;
 *VAR2 = 5L;
 }
 if(VAR3==5)
 {
 FUN5(*VAR2);
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new long;
 *VAR2 = 5L;
 }
 if(VAR3==5)
 {
 FUN5(*VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
