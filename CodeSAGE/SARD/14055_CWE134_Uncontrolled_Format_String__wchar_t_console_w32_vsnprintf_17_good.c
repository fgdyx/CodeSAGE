#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR4"", VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 int VAR6,VAR7;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
 size_t VAR9 = wcslen(VAR2);
 if (100-VAR9 > 1)
 {
 if (FUN6(VAR2+VAR9, (int)(100-VAR9), stdin) != NULL)
 {
 VAR9 = wcslen(VAR2);
 if (VAR9 > 0 && VAR2[VAR9-1] == VAR4'')
 {
 VAR2[VAR9-1] = VAR4'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR9] = VAR4'';
 }
 }
 }
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN8(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 int VAR10,VAR11;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 wcscpy(VAR2, VAR4"");
 }
 for(VAR11 = 0; VAR11 < 1; VAR11++)
 {
 FUN8(VAR2, VAR2);
 }
}
void FUN10()
{
 FUN9();
 FUN5();
}
#endif
