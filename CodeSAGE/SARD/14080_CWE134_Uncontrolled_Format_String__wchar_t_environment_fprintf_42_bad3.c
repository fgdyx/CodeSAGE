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
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR8, VAR2);
}
#endif
