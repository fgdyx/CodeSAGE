#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 wchar_t * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR3, VAR4, VAR6-VAR3-1);
 }
 }
 return VAR2;
}
#endif
