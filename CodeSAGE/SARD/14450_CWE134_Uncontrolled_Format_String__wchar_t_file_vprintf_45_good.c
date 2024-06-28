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
 wchar_t * VAR2 = VAR4;
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 VAR4 = VAR2;
 FUN5();
}
static void FUN7(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR6"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 wchar_t * VAR2 = VAR7;
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 size_t VAR8 = wcslen(VAR2);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 if (FUN10(VAR2+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN11("");
 VAR2[VAR8] = VAR6'';
 }
 fclose(VAR10);
 }
 }
 }
 VAR7 = VAR2;
 FUN8();
}
void FUN12()
{
 FUN6();
 FUN9();
}
#endif
