#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE114_Process_Control__w32_wchar_t_environment_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 HMODULE VAR8;
 VAR8 = LoadLibraryW(VAR2);
 if (VAR8 != NULL)
 {
 FUN2(VAR8);
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
