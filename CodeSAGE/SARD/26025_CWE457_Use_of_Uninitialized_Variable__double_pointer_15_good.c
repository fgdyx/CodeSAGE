#ifndef VAR1
static void FUN1()
{
 double * VAR2;
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
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
 break;
 }
}
static void FUN4()
{
 double * VAR2;
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
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 double * VAR2;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(*VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 double * VAR2;
 switch(6)
 {
 case 6:
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN3(*VAR2);
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
