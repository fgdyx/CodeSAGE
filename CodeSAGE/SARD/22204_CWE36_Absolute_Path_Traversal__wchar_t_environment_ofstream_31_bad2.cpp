#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, VAR4-VAR6-1);
 }
 }
 {
 wchar_t * VAR9 = VAR2;
 wchar_t * VAR2 = VAR9;
 {
 ofstream VAR10;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10.open((char *)VAR2);
 VAR10.close();
 }
 }
}
#endif
