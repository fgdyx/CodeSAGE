#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 delete [] VAR4;
}
void FUN2(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 delete VAR4;
}
#endif
