#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE114_Process_Control__w32_char_console_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 HMODULE VAR7;
 VAR7 = LoadLibraryA(VAR2);
 if (VAR7 != NULL)
 {
 FUN2(VAR7);
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
