#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 if (FUN8(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR5'')
 {
 VAR2[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN9("");
 VAR2[VAR7] = VAR5'';
 }
 }
 }
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 FUN6(VAR2, VAR2);
 }
}
void FUN10()
{
 FUN5();
 FUN7();
}
#endif
