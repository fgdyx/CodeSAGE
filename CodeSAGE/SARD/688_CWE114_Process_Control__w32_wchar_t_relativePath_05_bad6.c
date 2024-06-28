#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR6;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN2(VAR6);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
