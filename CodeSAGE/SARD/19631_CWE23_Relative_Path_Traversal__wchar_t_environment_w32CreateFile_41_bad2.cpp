#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 HANDLE VAR3;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR3 = FUN2(VAR2,
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if (VAR3 != VAR8)
 {
 FUN3(VAR3);
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR9[VAR10] = VAR11;
 VAR2 = VAR9;
 {
 size_t VAR12 = wcslen(VAR2);
 wchar_t * VAR13 = FUN5(VAR14);
 if (VAR13 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR12, VAR13, VAR10-VAR12-1);
 }
 }
 FUN1(VAR2);
}
#endif
