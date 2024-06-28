#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR2 = VAR5;
 {
 size_t VAR8 = wcslen(VAR2);
 if (VAR6-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR2+VAR8, (int)(VAR6-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR7'')
 {
 VAR2[VAR8-1] = VAR7'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR8] = VAR7'';
 }
 }
 }
 FUN5(VAR2);
}
#endif
