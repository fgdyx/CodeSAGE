#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 {
 wchar_t * VAR8 = VAR2;
 wchar_t * VAR2 = VAR8;
 {
 wchar_t VAR9[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR9, 100-1, VAR2);
 FUN4(VAR9);
 }
 }
}
#endif
