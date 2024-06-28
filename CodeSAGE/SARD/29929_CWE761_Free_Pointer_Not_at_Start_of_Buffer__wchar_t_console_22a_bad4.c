#ifndef VAR1
int VAR2 = 0;
void FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR3);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR3);
 if (VAR5 > 0 && VAR3[VAR5-1] == VAR4'')
 {
 VAR3[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR3[VAR5] = VAR4'';
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
