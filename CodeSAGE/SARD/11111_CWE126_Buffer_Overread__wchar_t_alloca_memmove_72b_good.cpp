#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 memmove(VAR5, VAR4, wcslen(VAR5)*sizeof(wchar_t));
 VAR5[100-1] = VAR6'';
 FUN2(VAR5);
 }
}
#endif
