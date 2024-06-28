#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 if (100-VAR4 > 1)
 {
 if (FUN3(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = wcslen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == VAR3'')
 {
 VAR2[VAR4-1] = VAR3'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR4] = VAR3'';
 }
 }
 }
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
