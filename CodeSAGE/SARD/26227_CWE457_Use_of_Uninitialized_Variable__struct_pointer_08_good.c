#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 ;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN5(VAR3->VAR4);
 FUN5(VAR3->VAR5);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 ;
 }
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN5(VAR3->VAR4);
 FUN5(VAR3->VAR5);
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(FUN2())
 {
 FUN5(VAR3->VAR4);
 FUN5(VAR3->VAR5);
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(FUN2())
 {
 FUN5(VAR3->VAR4);
 FUN5(VAR3->VAR5);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
