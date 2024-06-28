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
 if(VAR7)
 {
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 if (FUN6(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR5'')
 {
 VAR2[VAR8-1] = VAR5'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR8] = VAR5'';
 }
 }
 }
 }
 if(VAR9)
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
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(VAR7)
 {
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 if (FUN6(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR5'')
 {
 VAR2[VAR8-1] = VAR5'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR8] = VAR5'';
 }
 }
 }
 }
 if(VAR7)
 {
 FUN8(VAR2, VAR2);
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
 if(VAR9)
 {
 FUN7("");
 }
 else
 {
 wcscpy(VAR2, VAR5"");
 }
 if(VAR7)
 {
 FUN10(VAR2, VAR2);
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
 if(VAR7)
 {
 wcscpy(VAR2, VAR5"");
 }
 if(VAR7)
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
