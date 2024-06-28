#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR4);
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR3[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR3);
 }
}
#endif
