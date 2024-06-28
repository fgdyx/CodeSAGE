#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 HMODULE VAR3;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR3 = LoadLibraryW(VAR2);
 if (VAR3 != NULL)
 {
 FUN2(VAR3);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
