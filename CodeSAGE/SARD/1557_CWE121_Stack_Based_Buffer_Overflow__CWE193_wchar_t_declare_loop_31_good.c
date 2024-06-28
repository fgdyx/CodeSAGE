#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 wchar_t VAR7[10+1] = VAR8;
 size_t VAR9, VAR10;
 VAR10 = wcslen(VAR7);
 for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
 {
 VAR2[VAR9] = VAR7[VAR9];
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
