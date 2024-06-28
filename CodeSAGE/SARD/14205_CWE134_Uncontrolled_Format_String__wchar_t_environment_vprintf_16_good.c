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
 while(1)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 break;
 }
 while(1)
 {
 FUN1(VAR2, VAR2);
 break;
 }
}
static void FUN7(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 while(1)
 {
 wcscpy(VAR2, VAR4"");
 break;
 }
 while(1)
 {
 FUN7(VAR2, VAR2);
 break;
 }
}
void FUN9()
{
 FUN8();
 FUN5();
}
#endif
