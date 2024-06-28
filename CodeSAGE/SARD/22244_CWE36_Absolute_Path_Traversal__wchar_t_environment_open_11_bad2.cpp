#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, VAR4-VAR6-1);
 }
 }
 }
 {
 int VAR9;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR9 = FUN4(VAR2, VAR10|VAR11, VAR12|VAR13);
 if (VAR9 != -1)
 {
 FUN5(VAR9);
 }
 }
}
#endif
