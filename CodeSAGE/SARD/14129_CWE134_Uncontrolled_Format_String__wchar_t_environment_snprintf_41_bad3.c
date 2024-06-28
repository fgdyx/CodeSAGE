#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN5(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN1(VAR2);
}
#endif
