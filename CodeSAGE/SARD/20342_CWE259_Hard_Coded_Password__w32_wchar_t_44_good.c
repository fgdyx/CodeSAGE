#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 HANDLE VAR3;
 wchar_t * VAR4 = VAR5"";
 wchar_t * VAR6 = VAR5"";
 if (FUN2(
 VAR4,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR3) != 0)
 {
 FUN3("");
 FUN4(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 void (*VAR9) (wchar_t *) = VAR10;
 wchar_t VAR11[100] = VAR5"";
 VAR2 = VAR11;
 {
 size_t VAR12 = 0;
 if (FUN6(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = VAR5'';
 }
 VAR12 = wcslen(VAR2);
 if (VAR12 > 0)
 {
 VAR2[VAR12-1] = VAR5'';
 }
 }
 FUN7(VAR2);
}
void FUN8()
{
 FUN5();
}
#endif
