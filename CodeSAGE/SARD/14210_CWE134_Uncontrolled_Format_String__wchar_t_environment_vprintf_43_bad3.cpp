#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5(wchar_t * &VAR2)
{
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN6(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
}
void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR7[100] = VAR8"";
 VAR2 = VAR7;
 FUN5(VAR2);
 FUN1(VAR2, VAR2);
}
#endif
