#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 VAR3 = NULL;
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
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN2("");
 }
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 VAR3 = NULL;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN2("");
 }
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
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR4 = 0;
 VAR5->VAR4 = 0;
 VAR3 = VAR5;
 }
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(VAR3->VAR4);
 delete VAR3;
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
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR4 = 0;
 VAR5->VAR4 = 0;
 VAR3 = VAR5;
 }
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(VAR3->VAR4);
 delete VAR3;
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
