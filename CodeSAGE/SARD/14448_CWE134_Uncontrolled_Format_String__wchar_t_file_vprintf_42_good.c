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
 FUN4(VAR2, VAR4);
 FUN5(VAR4);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR3"";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
static wchar_t * FUN7(wchar_t * VAR2)
{
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN8(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN9("");
 VAR2[VAR6] = VAR3'';
 }
 fclose(VAR8);
 }
 }
 }
 return VAR2;
}
static void FUN10(wchar_t * VAR2, ...)
{
 {
 va_list VAR4;
 FUN3(VAR4, VAR2);
 FUN4(VAR3"", VAR4);
 FUN5(VAR4);
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR3"";
 VAR2 = VAR5;
 VAR2 = FUN7(VAR2);
 FUN10(VAR2, VAR2);
}
void FUN12()
{
 FUN6();
 FUN11();
}
#endif
