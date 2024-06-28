#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t[100];
}
void FUN2(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
}
#endif
