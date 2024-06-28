#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 switch(6)
 {
 case 6:
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 break;
 default:
 FUN7("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN7("");
 break;
 default:
 FUN1(VAR2, VAR2);
 break;
 }
}
static void FUN8(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 switch(6)
 {
 case 6:
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 break;
 default:
 FUN7("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN8(VAR2, VAR2);
 break;
 default:
 FUN7("");
 break;
 }
}
static void FUN10(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 switch(5)
 {
 case 6:
 FUN7("");
 break;
 default:
 wcscpy(VAR2, VAR5"");
 break;
 }
 switch(7)
 {
 case 7:
 FUN10(VAR2, VAR2);
 break;
 default:
 FUN7("");
 break;
 }
}
static void FUN12(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN13()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 switch(6)
 {
 case 6:
 wcscpy(VAR2, VAR5"");
 break;
 default:
 FUN7("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN12(VAR2, VAR2);
 break;
 default:
 FUN7("");
 break;
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
