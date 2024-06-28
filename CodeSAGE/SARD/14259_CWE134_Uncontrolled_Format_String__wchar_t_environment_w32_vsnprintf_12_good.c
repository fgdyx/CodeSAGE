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
static void FUN5(wchar_t * VAR2, ...)
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
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(FUN7())
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN8(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 else
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN8(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 if(FUN7())
 {
 FUN5(VAR2, VAR2);
 }
 else
 {
 FUN5(VAR2, VAR2);
 }
}
static void FUN9(wchar_t * VAR2, ...)
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
static void FUN10(wchar_t * VAR2, ...)
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
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(FUN7())
 {
 wcscpy(VAR2, VAR4"");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN7())
 {
 FUN10(VAR2, VAR2);
 }
 else
 {
 FUN10(VAR2, VAR2);
 }
}
void FUN12()
{
 FUN11();
 FUN6();
}
#endif
