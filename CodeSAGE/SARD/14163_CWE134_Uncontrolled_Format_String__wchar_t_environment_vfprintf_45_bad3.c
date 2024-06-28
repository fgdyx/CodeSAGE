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
static void FUN5()
{
 wchar_t * VAR2 = VAR5;
 FUN1(VAR2, VAR2);
}
void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN7(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 VAR5 = VAR2;
 FUN5();
}
#endif
