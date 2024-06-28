#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 wcscpy(VAR2, VAR3"");
 return VAR2;
}
wchar_t * FUN2(wchar_t * VAR2)
{
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN3(VAR6);
 if (VAR5 != NULL)
 {
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 return VAR2;
}
#endif
