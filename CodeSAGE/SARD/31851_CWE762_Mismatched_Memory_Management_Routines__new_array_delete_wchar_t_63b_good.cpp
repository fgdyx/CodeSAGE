#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 delete VAR3;
}
void FUN2(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 delete [] VAR3;
}
#endif
