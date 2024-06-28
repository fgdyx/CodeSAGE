#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 strcpy(VAR2, "");
 break;
 }
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 strcpy(VAR2, "");
 break;
 default:
 FUN2("");
 break;
 }
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
