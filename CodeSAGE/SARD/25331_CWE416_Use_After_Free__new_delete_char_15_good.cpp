#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char;
 *VAR2 = '';
 delete VAR2;
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
 ;
 break;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char;
 *VAR2 = '';
 delete VAR2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = new char;
 *VAR2 = '';
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(*VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char;
 *VAR2 = '';
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(*VAR2);
 break;
 default:
 FUN2("");
 break;
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
