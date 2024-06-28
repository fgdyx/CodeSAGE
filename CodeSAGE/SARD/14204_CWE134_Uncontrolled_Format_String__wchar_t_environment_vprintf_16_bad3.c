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
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 while(1)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 break;
 }
 while(1)
 {
 FUN1(VAR2, VAR2);
 break;
 }
}
#endif
