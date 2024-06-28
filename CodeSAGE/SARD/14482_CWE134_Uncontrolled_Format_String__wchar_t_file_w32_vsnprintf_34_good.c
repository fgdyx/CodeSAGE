#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
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
static void FUN5()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_34_unionType VAR6;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 wcscpy(VAR2, VAR4"");
 VAR6.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR6.VAR9;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(wchar_t * VAR2, ...)
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
static void FUN7()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_34_unionType VAR6;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 {
 size_t VAR10 = wcslen(VAR2);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR13, "");
 if (VAR12 != NULL)
 {
 if (FUN8(VAR2+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN9("");
 VAR2[VAR10] = VAR4'';
 }
 fclose(VAR12);
 }
 }
 }
 VAR6.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR6.VAR9;
 FUN6(VAR2, VAR2);
 }
}
void FUN10()
{
 FUN5();
 FUN7();
}
#endif
