#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
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
 FUN4(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN6())
 {
 strcpy(VAR2, "");
 }
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN4(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
