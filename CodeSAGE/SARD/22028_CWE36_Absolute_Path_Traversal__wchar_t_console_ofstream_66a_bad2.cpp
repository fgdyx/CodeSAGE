#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 {
 size_t VAR7 = wcslen(VAR3);
 if (VAR5-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR3+VAR7, (int)(VAR5-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR3);
 if (VAR7 > 0 && VAR3[VAR7-1] == VAR6'')
 {
 VAR3[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN4("");
 VAR3[VAR7] = VAR6'';
 }
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
