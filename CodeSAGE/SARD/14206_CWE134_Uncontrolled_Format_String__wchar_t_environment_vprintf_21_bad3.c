#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3, ...)
{
 if(VAR2)
 {
 {
 va_list VAR4;
 FUN2(VAR4, VAR3);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR3, VAR4);
 FUN4(VAR4);
 }
 }
}
void FUN5()
{
 wchar_t * VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR3 = VAR5;
 {
 size_t VAR7 = wcslen(VAR3);
 wchar_t * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR3+VAR7, VAR8, 100-VAR7-1);
 }
 }
 VAR2 = 1;
 FUN1(VAR3, VAR3);
}
#endif
