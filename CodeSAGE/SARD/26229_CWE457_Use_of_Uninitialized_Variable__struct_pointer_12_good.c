#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
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
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(FUN2())
 {
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
 else
 {
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
