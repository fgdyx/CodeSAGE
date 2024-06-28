#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5==5)
 {
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR5;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR5 = LoadLibraryW(VAR2);
 if (VAR5 != NULL)
 {
 FUN2(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
