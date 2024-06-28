#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR2 = VAR4;
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN2(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR7, VAR8, VAR5-VAR7-1);
 }
 }
 VAR3.VAR10 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR11;
 {
 int VAR12;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR12 = FUN3(VAR2, VAR13|VAR14, VAR15|VAR16);
 if (VAR12 != -1)
 {
 FUN4(VAR12);
 }
 }
 }
}
#endif
