#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = new wchar_t;
 return VAR2;
}
wchar_t * FUN2(wchar_t * VAR2)
{
 VAR2 = new wchar_t;
 delete VAR2;
 return VAR2;
}
#endif
