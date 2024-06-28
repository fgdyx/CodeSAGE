#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 if (VAR4-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR3, (int)(VAR4-VAR3), stdin) != NULL)
 {
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == VAR5'')
 {
 VAR2[VAR3-1] = VAR5'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR3] = VAR5'';
 }
 }
 }
}
#endif
