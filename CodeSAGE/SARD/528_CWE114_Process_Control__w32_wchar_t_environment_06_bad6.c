#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 {
 HMODULE VAR9;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR9 = LoadLibraryW(VAR2);
 if (VAR9 != NULL)
 {
 FUN3(VAR9);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
