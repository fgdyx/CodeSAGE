#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 if(VAR5)
 {
 {
 wchar_t VAR9[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR9, 100-1, VAR2);
 FUN4(VAR9);
 }
 }
}
#endif
