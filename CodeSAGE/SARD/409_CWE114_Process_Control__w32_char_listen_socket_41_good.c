#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 HMODULE VAR3;
 VAR3 = LoadLibraryA(VAR2);
 if (VAR3 != NULL)
 {
 FUN2(VAR3);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
