#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t;
}
void FUN2(wchar_t * &VAR2)
{
 VAR2 = new wchar_t;
 delete VAR2;
}
#endif
