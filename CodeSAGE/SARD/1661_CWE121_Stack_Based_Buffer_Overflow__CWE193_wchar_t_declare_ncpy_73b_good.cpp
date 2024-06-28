#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 wchar_t VAR5[10+1] = VAR6;
 wcsncpy(VAR4, VAR5, wcslen(VAR5) + 1);
 FUN3(VAR4);
 }
}
#endif
