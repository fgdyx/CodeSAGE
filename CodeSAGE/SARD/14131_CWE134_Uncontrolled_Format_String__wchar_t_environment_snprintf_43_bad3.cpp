#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
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
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 FUN1(VAR2);
 {
 wchar_t VAR8[100] = VAR7"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
 }
}
#endif
