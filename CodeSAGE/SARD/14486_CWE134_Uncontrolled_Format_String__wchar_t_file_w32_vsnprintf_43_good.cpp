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
static void FUN5(wchar_t * &VAR2)
{
 wcscpy(VAR2, VAR4"");
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 FUN5(VAR2);
 FUN1(VAR2, VAR2);
}
static void FUN7(wchar_t * VAR2, ...)
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
static void FUN8(wchar_t * &VAR2)
{
 {
 size_t VAR7 = wcslen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (FUN9(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN10("");
 VAR2[VAR7] = VAR4'';
 }
 fclose(VAR9);
 }
 }
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 FUN8(VAR2);
 FUN7(VAR2, VAR2);
}
void FUN12()
{
 FUN6();
 FUN11();
}
#endif
