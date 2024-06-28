#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscpy(VAR2, VAR3"");
 return VAR2;
}
static void FUN2(wchar_t * VAR2, ...)
{
 {
 va_list VAR4;
 FUN3(VAR4, VAR2);
 FUN4(VAR5, VAR2, VAR4);
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
 wchar_t * VAR8 = FUN8(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 return VAR2;
}
static void FUN9(wchar_t * VAR2, ...)
{
 {
 va_list VAR4;
 FUN3(VAR4, VAR2);
 FUN4(VAR5, VAR3"", VAR4);
 FUN5(VAR4);
 }
}
static void FUN10()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR3"";
 VAR2 = VAR6;
 VAR2 = FUN7(VAR2);
 FUN9(VAR2, VAR2);
}
void FUN11()
{
 FUN6();
 FUN10();
}
#endif
