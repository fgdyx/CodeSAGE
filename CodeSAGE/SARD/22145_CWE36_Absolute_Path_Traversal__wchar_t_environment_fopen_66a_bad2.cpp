#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 {
 size_t VAR7 = wcslen(VAR3);
 wchar_t * VAR8 = FUN3(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR3+VAR7, VAR8, VAR5-VAR7-1);
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
