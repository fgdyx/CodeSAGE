#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR8 = VAR2;
 FUN1();
}
#endif
