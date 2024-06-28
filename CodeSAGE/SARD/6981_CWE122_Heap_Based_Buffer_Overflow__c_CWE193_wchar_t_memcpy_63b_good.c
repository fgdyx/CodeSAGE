#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[10+1] = VAR5;
 memcpy(VAR3, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
