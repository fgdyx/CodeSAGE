#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5(wchar_t * &VAR2)
{
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN6(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
}
void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR9"";
 VAR2 = VAR8;
 FUN5(VAR2);
 FUN1(VAR2, VAR2);
}
#endif
