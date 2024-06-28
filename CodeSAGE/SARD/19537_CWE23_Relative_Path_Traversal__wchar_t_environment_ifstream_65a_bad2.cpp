#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN3(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR8, VAR9, VAR6-VAR8-1);
 }
 }
 FUN4(VAR2);
}
#endif
