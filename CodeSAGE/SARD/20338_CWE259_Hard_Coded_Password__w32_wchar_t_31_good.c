#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = 0;
 if (FUN2(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = VAR4'';
 }
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0)
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 HANDLE VAR7;
 wchar_t * VAR8 = VAR4"";
 wchar_t * VAR9 = VAR4"";
 if (FUN4(
 VAR8,
 VAR9,
 VAR2,
 VAR10,
 VAR11,
 &VAR7) != 0)
 {
 FUN3("");
 FUN5(VAR7);
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
