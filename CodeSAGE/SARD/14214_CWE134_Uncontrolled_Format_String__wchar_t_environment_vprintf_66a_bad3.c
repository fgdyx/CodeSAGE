#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
 size_t VAR6 = wcslen(VAR3);
 wchar_t * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR3+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
