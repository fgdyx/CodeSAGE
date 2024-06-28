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
 else
 {
#ifdef VAR9
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 int VAR10;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10 = FUN4(VAR2, VAR11|VAR12, VAR13|VAR14);
 if (VAR10 != -1)
 {
 FUN5(VAR10);
 }
 }
}
#endif
