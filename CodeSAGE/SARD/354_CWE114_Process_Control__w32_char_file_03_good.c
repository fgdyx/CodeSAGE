#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, "");
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
 if(5==5)
 {
 strcpy(VAR2, "");
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
