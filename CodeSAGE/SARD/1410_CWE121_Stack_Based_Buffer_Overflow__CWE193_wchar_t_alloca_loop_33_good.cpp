#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR7[10+1] = VAR8;
 size_t VAR9, VAR10;
 VAR10 = wcslen(VAR7);
 for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
 {
 VAR2[VAR9] = VAR7[VAR9];
 }
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
