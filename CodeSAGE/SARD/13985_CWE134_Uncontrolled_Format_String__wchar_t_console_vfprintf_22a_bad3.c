#ifndef VAR1
int VAR2 = 0;
void FUN1(wchar_t * VAR3, ...);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
 size_t VAR6 = wcslen(VAR3);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR3+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR3);
 if (VAR6 > 0 && VAR3[VAR6-1] == VAR5'')
 {
 VAR3[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN4("");
 VAR3[VAR6] = VAR5'';
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3, VAR3);
}
#endif
