#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = new wchar_t[100];
 return VAR2;
}
wchar_t * FUN2(wchar_t * VAR2)
{
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 return VAR2;
}
#endif
