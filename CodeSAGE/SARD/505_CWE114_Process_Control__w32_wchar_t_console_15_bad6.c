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
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 {
 HMODULE VAR6;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
