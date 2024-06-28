#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR6 = 0;
 if (FUN2(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 VAR3[0] = VAR5'';
 }
 VAR6 = wcslen(VAR3);
 if (VAR6 > 0)
 {
 VAR3[VAR6-1] = VAR5'';
 }
 }
 }
 {
 HANDLE VAR7;
 wchar_t * VAR8 = VAR5"";
 wchar_t * VAR9 = VAR5"";
 if (FUN4(
 VAR8,
 VAR9,
 VAR3,
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
void FUN6()
{
 FUN1();
}
#endif
