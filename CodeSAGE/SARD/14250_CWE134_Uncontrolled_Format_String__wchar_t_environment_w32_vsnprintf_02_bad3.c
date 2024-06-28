#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(1)
 {
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 if(1)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
