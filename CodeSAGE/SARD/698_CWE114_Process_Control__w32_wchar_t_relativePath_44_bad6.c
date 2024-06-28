#ifndef VAR1
static void FUN1(wchar_t * VAR2)
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
void FUN4()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR2, VAR7"");
 FUN5(VAR2);
}
#endif
