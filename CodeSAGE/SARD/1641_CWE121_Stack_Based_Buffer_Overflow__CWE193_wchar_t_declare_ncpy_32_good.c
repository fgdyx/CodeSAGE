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
 wcsncpy(VAR2, VAR8, wcslen(VAR8) + 1);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
