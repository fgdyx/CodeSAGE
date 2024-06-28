#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 wcscpy(VAR2, VAR3"");
}
void FUN2(wchar_t * &VAR2)
{
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
}
#endif
