#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new VAR2;
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
 delete VAR3;
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new VAR2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 delete VAR3;
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 break;
 }
 switch(7)
 {
 case 7:
 free(VAR3);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 free(VAR3);
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
