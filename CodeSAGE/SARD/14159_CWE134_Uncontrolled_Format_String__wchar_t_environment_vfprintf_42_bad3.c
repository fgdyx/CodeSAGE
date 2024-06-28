#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 wchar_t * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 return VAR2;
}
static void FUN3(wchar_t * VAR2, ...)
{
 {
 va_list VAR6;
 FUN4(VAR6, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN5(VAR7, VAR2, VAR6);
 FUN6(VAR6);
 }
}
void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR9"";
 VAR2 = VAR8;
 VAR2 = FUN1(VAR2);
 FUN3(VAR2, VAR2);
}
#endif
