#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN3(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 FUN1(VAR2);
}
#endif
