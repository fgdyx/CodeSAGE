#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[50] = VAR6"";
 memmove(VAR5, VAR4, wcslen(VAR4)*sizeof(wchar_t));
 VAR5[50-1] = VAR6'';
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
