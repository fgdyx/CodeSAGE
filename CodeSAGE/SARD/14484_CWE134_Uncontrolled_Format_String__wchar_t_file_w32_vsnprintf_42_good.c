#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscpy(VAR2, VAR3"");
 return VAR2;
}
static void FUN2(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR4[100] = VAR3"";
 va_list VAR5;
 FUN3(VAR5, VAR2);
 _vsnwprintf(VAR4, 100-1, VAR2, VAR5);
 FUN4(VAR5);
 FUN5(VAR4);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR3"";
 VAR2 = VAR6;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
static wchar_t * FUN7(wchar_t * VAR2)
{
 {
 size_t VAR7 = wcslen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (FUN8(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN9("");
 VAR2[VAR7] = VAR3'';
 }
 fclose(VAR9);
 }
 }
 }
 return VAR2;
}
static void FUN10(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR4[100] = VAR3"";
 va_list VAR5;
 FUN3(VAR5, VAR2);
 _vsnwprintf(VAR4, 100-1, VAR3"", VAR5);
 FUN4(VAR5);
 FUN5(VAR4);
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR3"";
 VAR2 = VAR6;
 VAR2 = FUN7(VAR2);
 FUN10(VAR2, VAR2);
}
void FUN12()
{
 FUN6();
 FUN11();
}
#endif
