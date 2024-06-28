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
 if(FUN6())
 {
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 if (FUN7(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR5'')
 {
 VAR2[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN8("");
 VAR2[VAR7] = VAR5'';
 }
 }
 }
 }
 if(FUN9())
 {
 FUN8("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN10(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(FUN6())
 {
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 if (FUN7(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR5'')
 {
 VAR2[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN8("");
 VAR2[VAR7] = VAR5'';
 }
 }
 }
 }
 if(FUN6())
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
 if(FUN9())
 {
 FUN8("");
 }
 else
 {
 wcscpy(VAR2, VAR5"");
 }
 if(FUN6())
 {
 FUN12(VAR2, VAR2);
 }
}
static void FUN14(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN15()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(FUN6())
 {
 wcscpy(VAR2, VAR5"");
 }
 if(FUN6())
 {
 FUN14(VAR2, VAR2);
 }
}
void FUN16()
{
 FUN13();
 FUN15();
 FUN5();
 FUN11();
}
#endif
