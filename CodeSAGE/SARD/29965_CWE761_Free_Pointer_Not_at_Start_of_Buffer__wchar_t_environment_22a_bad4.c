#ifndef VAR1
int VAR2 = 0;
void FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR3);
 wchar_t * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR3+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
