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
 void (*VAR4) (wchar_t *, ...) = VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR7"");
 FUN6(VAR2);
}
static void FUN7(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR7"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *, ...) = VAR8;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
 size_t VAR9 = wcslen(VAR2);
 wchar_t * VAR10 = FUN9(VAR11);
 if (VAR10 != NULL)
 {
 wcsncat(VAR2+VAR9, VAR10, 100-VAR9-1);
 }
 }
 FUN6(VAR2);
}
void FUN10()
{
 FUN5();
 FUN8();
}
#endif
