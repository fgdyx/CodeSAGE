#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
