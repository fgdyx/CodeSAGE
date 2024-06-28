#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (char *)malloc(100*sizeof(char));
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
 free(VAR2);
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
 VAR2 = (char *)malloc(100*sizeof(char));
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 free(VAR2);
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
 break;
 }
 switch(7)
 {
 case 7:
 delete VAR2;
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 delete VAR2;
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
