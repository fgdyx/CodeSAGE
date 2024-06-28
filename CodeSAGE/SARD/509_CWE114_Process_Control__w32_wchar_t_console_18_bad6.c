#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 {
 HMODULE VAR7;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR7 = LoadLibraryW(VAR2);
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
