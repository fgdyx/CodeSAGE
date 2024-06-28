#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 {
 size_t VAR7 = 0;
 if (FUN2(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = VAR6'';
 }
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0)
 {
 VAR2[VAR7-1] = VAR6'';
 }
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 HANDLE VAR8;
 wchar_t * VAR9 = VAR6"";
 wchar_t * VAR10 = VAR6"";
 if (FUN4(
 VAR9,
 VAR10,
 VAR2,
 VAR11,
 VAR12,
 &VAR8) != 0)
 {
 FUN3("");
 FUN5(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
}
#endif
