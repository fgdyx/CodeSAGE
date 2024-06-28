#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR5);
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR4[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
