#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 *VAR2 = 5L;
 delete VAR2;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 ;
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 *VAR2 = 5L;
 delete VAR2;
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = new long;
 *VAR2 = 5L;
 }
 if(FUN2())
 {
 FUN7(*VAR2);
 }
}
static void FUN8()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 *VAR2 = 5L;
 }
 if(FUN2())
 {
 FUN7(*VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN5();
 FUN6();
 FUN8();
}
#endif
