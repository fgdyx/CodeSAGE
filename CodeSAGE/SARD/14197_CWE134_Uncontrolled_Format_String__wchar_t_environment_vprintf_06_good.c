#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(VAR6==5)
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 if(VAR6!=5)
 {
 FUN7("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN8(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(VAR6==5)
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 if(VAR6==5)
 {
 FUN8(VAR2, VAR2);
 }
}
static void FUN10(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(VAR6!=5)
 {
 FUN7("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR6==5)
 {
 FUN10(VAR2, VAR2);
 }
}
static void FUN12(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN13()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(VAR6==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR6==5)
 {
 FUN12(VAR2, VAR2);
 }
}
void FUN14()
{
 FUN11();
 FUN13();
 FUN5();
 FUN9();
}
#endif
