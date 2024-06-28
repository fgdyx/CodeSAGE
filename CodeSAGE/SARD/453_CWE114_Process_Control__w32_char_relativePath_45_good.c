#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN2(VAR4);
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
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
