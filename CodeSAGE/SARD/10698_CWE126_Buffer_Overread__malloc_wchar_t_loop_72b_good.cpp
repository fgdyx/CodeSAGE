#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 size_t VAR5, VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 VAR6 = wcslen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR4[VAR5];
 }
 VAR7[100-1] = VAR8'';
 FUN2(VAR7);
 free(VAR4);
 }
}
#endif
