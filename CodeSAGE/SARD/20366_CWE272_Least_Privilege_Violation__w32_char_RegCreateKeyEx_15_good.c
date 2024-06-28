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
 char * VAR2 = "";
 HKEY VAR3;
 if (FUN3(
 VAR4,
 VAR2,
 0,
 NULL,
 VAR5,
 VAR6,
 NULL,
 &VAR3,
 NULL) != VAR7)
 {
 FUN2("");
 }
 else
 {
 FUN2("");
 FUN4(VAR3);
 }
 }
 break;
 }
}
static void FUN5()
{
 switch(6)
 {
 case 6:
 {
 char * VAR2 = "";
 HKEY VAR3;
 if (FUN3(
 VAR4,
 VAR2,
 0,
 NULL,
 VAR5,
 VAR6,
 NULL,
 &VAR3,
 NULL) != VAR7)
 {
 FUN2("");
 }
 else
 {
 FUN2("");
 FUN4(VAR3);
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
