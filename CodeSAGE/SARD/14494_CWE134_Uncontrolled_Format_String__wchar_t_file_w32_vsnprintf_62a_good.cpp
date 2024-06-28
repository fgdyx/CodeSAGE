#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN3(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN4(VAR5);
 FUN5(VAR3);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
void FUN7(wchar_t * &VAR2);
static void FUN8(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN3(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR4"", VAR5);
 FUN4(VAR5);
 FUN5(VAR3);
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 FUN7(VAR2);
 FUN8(VAR2, VAR2);
}
void FUN10()
{
 FUN6();
 FUN9();
}
#endif
