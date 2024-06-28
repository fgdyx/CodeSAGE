#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2 = VAR5;
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR7"");
 VAR5 = VAR2;
 FUN5();
}
static void FUN7(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR7"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 wchar_t * VAR2 = VAR8;
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
 size_t VAR9 = wcslen(VAR2);
 wchar_t * VAR10 = FUN10(VAR11);
 if (VAR10 != NULL)
 {
 wcsncat(VAR2+VAR9, VAR10, 100-VAR9-1);
 }
 }
 VAR8 = VAR2;
 FUN8();
}
void FUN11()
{
 FUN6();
 FUN9();
}
#endif
