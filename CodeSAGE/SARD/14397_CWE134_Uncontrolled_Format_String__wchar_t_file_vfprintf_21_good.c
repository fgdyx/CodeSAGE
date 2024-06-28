#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(wchar_t * VAR5, ...)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR8"", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR5;
 wchar_t VAR9[100] = VAR8"";
 VAR5 = VAR9;
 {
 size_t VAR10 = wcslen(VAR5);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR13, "");
 if (VAR12 != NULL)
 {
 if (FUN7(VAR5+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN2("");
 VAR5[VAR10] = VAR8'';
 }
 fclose(VAR12);
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5, VAR5);
}
static void FUN8(wchar_t * VAR5, ...)
{
 if(VAR3)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR8"", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN9()
{
 wchar_t * VAR5;
 wchar_t VAR9[100] = VAR8"";
 VAR5 = VAR9;
 {
 size_t VAR10 = wcslen(VAR5);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR13, "");
 if (VAR12 != NULL)
 {
 if (FUN7(VAR5+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN2("");
 VAR5[VAR10] = VAR8'';
 }
 fclose(VAR12);
 }
 }
 }
 VAR3 = 1;
 FUN8(VAR5, VAR5);
}
static void FUN10(wchar_t * VAR5, ...)
{
 if(VAR4)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR5, VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN11()
{
 wchar_t * VAR5;
 wchar_t VAR9[100] = VAR8"";
 VAR5 = VAR9;
 wcscpy(VAR5, VAR8"");
 VAR4 = 1;
 FUN10(VAR5, VAR5);
}
void FUN12()
{
 FUN6();
 FUN9();
 FUN11();
}
#endif
