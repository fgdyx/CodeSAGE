#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 HMODULE VAR6;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR6 = LoadLibraryW(VAR3);
 if (VAR6 != NULL)
 {
 FUN3(VAR6);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
