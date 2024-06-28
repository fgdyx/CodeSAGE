#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR2);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR4[VAR6] = VAR2[VAR6];
 }
 VAR4[50-1] = VAR5'';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
