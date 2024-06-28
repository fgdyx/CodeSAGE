#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE114_Process_Control__w32_wchar_t_environment_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR3.VAR9 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR10;
 {
 HMODULE VAR11;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR11 = LoadLibraryW(VAR2);
 if (VAR11 != NULL)
 {
 FUN3(VAR11);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
