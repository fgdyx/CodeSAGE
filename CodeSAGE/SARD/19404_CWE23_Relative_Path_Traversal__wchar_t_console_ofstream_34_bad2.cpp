#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 {
 size_t VAR7 = wcslen(VAR2);
 if (VAR5-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR7, (int)(VAR5-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR8'')
 {
 VAR2[VAR7-1] = VAR8'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR7] = VAR8'';
 }
 }
 }
 VAR3.VAR9 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR10;
 {
 ofstream VAR11;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR11.open((char *)VAR2);
 VAR11.close();
 }
 }
}
#endif
