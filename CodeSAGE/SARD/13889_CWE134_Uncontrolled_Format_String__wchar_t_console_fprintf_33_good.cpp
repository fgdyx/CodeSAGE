#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 {
 wchar_t * VAR2 = VAR3;
 fwprintf(VAR6, VAR2);
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 if (FUN3(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR5'')
 {
 VAR2[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR7] = VAR5'';
 }
 }
 }
 {
 wchar_t * VAR2 = VAR3;
 fwprintf(VAR6, VAR5"", VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN2();
}
#endif
