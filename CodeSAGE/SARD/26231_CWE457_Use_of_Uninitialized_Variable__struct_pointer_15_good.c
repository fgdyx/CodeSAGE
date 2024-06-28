#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 ;
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 ;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 break;
 default:
 FUN2("");
 break;
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
