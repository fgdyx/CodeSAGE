#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 {
 size_t VAR6 = wcslen(VAR4);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == VAR5'')
 {
 VAR4[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN4("");
 VAR4[VAR6] = VAR5'';
 }
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
