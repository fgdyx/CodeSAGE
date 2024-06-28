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
 void (*VAR6) (wchar_t *, ...) = VAR7;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 wcscpy(VAR2, VAR4"");
 FUN6(VAR2);
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
static void FUN8()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *, ...) = VAR9;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 {
 size_t VAR10 = wcslen(VAR2);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR13, "");
 if (VAR12 != NULL)
 {
 if (FUN9(VAR2+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN10("");
 VAR2[VAR10] = VAR4'';
 }
 fclose(VAR12);
 }
 }
 }
 FUN6(VAR2);
}
void FUN11()
{
 FUN5();
 FUN8();
}
#endif
