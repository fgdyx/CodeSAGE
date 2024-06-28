#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 VAR4 * VAR5;
 if (100-VAR3 > 1)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR3, (int)(100-VAR3), VAR5) == NULL)
 {
 FUN3("");
 VAR2[VAR3] = VAR7'';
 }
 fclose(VAR5);
 }
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR7"";
 VAR2 = VAR8;
 FUN1(VAR2);
 {
 HMODULE VAR9;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR9 = LoadLibraryW(VAR2);
 if (VAR9 != NULL)
 {
 FUN5(VAR9);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
