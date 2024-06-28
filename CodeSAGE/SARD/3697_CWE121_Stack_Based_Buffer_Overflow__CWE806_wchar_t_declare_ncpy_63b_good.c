#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[50] = VAR5"";
 wcsncpy(VAR4, VAR3, wcslen(VAR3));
 VAR4[50-1] = VAR5'';
 FUN2(VAR3);
 }
}
#endif
