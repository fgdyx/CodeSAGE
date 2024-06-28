#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR4 = VAR5;
 {
 size_t VAR8 = wcslen(VAR4);
 wchar_t * VAR9 = FUN3(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR4+VAR8, VAR9, VAR6-VAR8-1);
 }
 }
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
