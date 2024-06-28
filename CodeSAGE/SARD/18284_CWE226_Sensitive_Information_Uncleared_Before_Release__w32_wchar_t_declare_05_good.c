#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR3[100] = VAR4"";
 size_t VAR5 = 0;
 HANDLE VAR6;
 wchar_t * VAR7 = VAR4"";
 wchar_t * VAR8 = VAR4"";
 if (FUN3(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = VAR4'';
 }
 VAR5 = wcslen(VAR3);
 if (VAR5 > 0)
 {
 VAR3[VAR5-1] = VAR4'';
 }
 if (FUN4(
 VAR7,
 VAR8,
 VAR3,
 VAR9,
 VAR10,
 &VAR6) != 0)
 {
 FUN2("");
 FUN5(VAR6);
 }
 else
 {
 FUN2("");
 }
 VAR5 = wcslen(VAR3);
 FUN6(VAR3, VAR5 * sizeof(wchar_t));
 }
 }
}
static void FUN7()
{
 if(VAR11)
 {
 {
 wchar_t VAR3[100] = VAR4"";
 size_t VAR5 = 0;
 HANDLE VAR6;
 wchar_t * VAR7 = VAR4"";
 wchar_t * VAR8 = VAR4"";
 if (FUN3(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = VAR4'';
 }
 VAR5 = wcslen(VAR3);
 if (VAR5 > 0)
 {
 VAR3[VAR5-1] = VAR4'';
 }
 if (FUN4(
 VAR7,
 VAR8,
 VAR3,
 VAR9,
 VAR10,
 &VAR6) != 0)
 {
 FUN2("");
 FUN5(VAR6);
 }
 else
 {
 FUN2("");
 }
 VAR5 = wcslen(VAR3);
 FUN6(VAR3, VAR5 * sizeof(wchar_t));
 }
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
