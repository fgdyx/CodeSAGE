#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcpy(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 HMODULE VAR6;
 VAR6 = LoadLibraryA(VAR2);
 if (VAR6 != NULL)
 {
 FUN2(VAR6);
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
