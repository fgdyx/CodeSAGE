#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
