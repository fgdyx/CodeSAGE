#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen(VAR2);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 {
 HMODULE VAR6;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN5(VAR6);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
