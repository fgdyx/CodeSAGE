#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[10];
 wchar_t VAR6[10+1];
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = VAR6;
 VAR2[0] = VAR7'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[10+1] = VAR9;
 size_t VAR10, VAR11;
 VAR11 = wcslen(VAR8);
 for (VAR10 = 0; VAR10 < VAR11 + 1; VAR10++)
 {
 VAR2[VAR10] = VAR8[VAR10];
 }
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
