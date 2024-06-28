#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 wchar_t * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR3, VAR4, VAR6-VAR3-1);
 }
 }
 return VAR2;
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[VAR6] = VAR8;
 VAR2 = VAR7;
 VAR2 = FUN1(VAR2);
 {
 HANDLE VAR9;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR9 = FUN4(VAR2,
 (VAR10|VAR11),
 0,
 NULL,
 VAR12,
 VAR13,
 NULL);
 if (VAR9 != VAR14)
 {
 FUN5(VAR9);
 }
 }
}
#endif
