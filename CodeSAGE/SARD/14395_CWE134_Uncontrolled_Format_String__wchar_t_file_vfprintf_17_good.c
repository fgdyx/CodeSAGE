#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 int VAR6,VAR7;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR5"";
 VAR2 = VAR8;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
 size_t VAR9 = wcslen(VAR2);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (FUN6(VAR2+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN7("");
 VAR2[VAR9] = VAR5'';
 }
 fclose(VAR11);
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
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 int VAR13,VAR14;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR5"";
 VAR2 = VAR8;
 for(VAR13 = 0; VAR13 < 1; VAR13++)
 {
 wcscpy(VAR2, VAR5"");
 }
 for(VAR14 = 0; VAR14 < 1; VAR14++)
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
