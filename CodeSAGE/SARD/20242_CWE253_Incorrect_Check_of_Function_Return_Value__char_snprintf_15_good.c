#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN3(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN4()
{
 switch(6)
 {
 case 6:
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN3(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
