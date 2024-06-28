#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR7 = wcslen(VAR4);
 wchar_t * VAR8 = FUN2(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR4+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR4);
 }
}
#endif
