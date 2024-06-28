#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 FUN2(VAR3);
 delete [] VAR3;
}
#endif
