#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 {
 char * VAR2 = VAR3;
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryA(VAR2);
 if (VAR5 != NULL)
 {
 FUN2(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
