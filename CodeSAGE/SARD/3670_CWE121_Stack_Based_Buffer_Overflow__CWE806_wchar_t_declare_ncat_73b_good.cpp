#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 wchar_t VAR5[50] = VAR6"";
 wcsncat(VAR5, VAR4, wcslen(VAR4));
 VAR5[50-1] = VAR6'';
 FUN3(VAR4);
 }
}
#endif
