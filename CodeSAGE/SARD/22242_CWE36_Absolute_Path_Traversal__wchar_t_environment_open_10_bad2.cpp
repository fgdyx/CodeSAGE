#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6)
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN2(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR7, VAR8, VAR4-VAR7-1);
 }
 }
 }
 {
 int VAR10;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10 = FUN3(VAR2, VAR11|VAR12, VAR13|VAR14);
 if (VAR10 != -1)
 {
 FUN4(VAR10);
 }
 }
}
#endif
