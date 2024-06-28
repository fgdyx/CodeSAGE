#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR5 = wcslen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 {
 HMODULE VAR9;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR9 = LoadLibraryW(VAR2);
 if (VAR9 != NULL)
 {
 FUN4(VAR9);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
