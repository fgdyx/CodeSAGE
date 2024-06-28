#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN2(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR8, VAR9, VAR6-VAR8-1);
 }
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 VAR11 *VAR12 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR12 = FUN3(VAR2, VAR13"");
 if (VAR12 != NULL)
 {
 fclose(VAR12);
 }
 }
 }
}
#endif
