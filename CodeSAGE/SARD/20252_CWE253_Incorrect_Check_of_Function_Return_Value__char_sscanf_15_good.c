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
 if (sscanf(VAR4, "", VAR3) == VAR5)
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN3()
{
 switch(6)
 {
 case 6:
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (sscanf(VAR4, "", VAR3) == VAR5)
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
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
