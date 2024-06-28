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
 if(5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN6(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN7("");
 VAR2[VAR6] = VAR4'';
 }
 fclose(VAR8);
 }
 }
 }
 }
 if(5!=5)
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
 if(5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN6(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN7("");
 VAR2[VAR6] = VAR4'';
 }
 fclose(VAR8);
 }
 }
 }
 }
 if(5==5)
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
 if(5!=5)
 {
 FUN7("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
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
 if(5==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
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
