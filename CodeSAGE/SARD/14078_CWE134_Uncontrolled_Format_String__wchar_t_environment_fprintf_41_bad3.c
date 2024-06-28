#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR3, VAR2);
}
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN1(VAR2);
}
#endif
