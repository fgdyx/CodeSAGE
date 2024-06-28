#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 wchar_t * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR3+VAR4, VAR5, VAR7-VAR4-1);
 }
 }
 }
 return VAR3;
}
#endif
