#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR6 = wcslen(VAR2);
 if (VAR4-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR6, (int)(VAR4-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR5'')
 {
 VAR2[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR5'';
 }
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 {
 ofstream VAR7;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
#endif
