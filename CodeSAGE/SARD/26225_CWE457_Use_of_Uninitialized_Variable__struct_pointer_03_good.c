#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
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
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 if(5==5)
 {
 ;
 }
 if(5==5)
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(5==5)
 {
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(5==5)
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(5==5)
 {
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
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
