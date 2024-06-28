#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 size_t VAR4 = 0;
 HANDLE VAR5;
 wchar_t * VAR6 = VAR7"";
 wchar_t * VAR8 = VAR7"";
 VAR3[0] = VAR7'';
 if (FUN4(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = VAR7'';
 }
 VAR4 = wcslen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = VAR7'';
 }
 if (FUN5(
 VAR6,
 VAR8,
 VAR3,
 VAR9,
 VAR10,
 &VAR5) != 0)
 {
 FUN2("");
 FUN6(VAR5);
 }
 else
 {
 FUN2("");
 }
 VAR4 = wcslen(VAR3);
 FUN7(VAR3, VAR4 * sizeof(wchar_t));
 }
 }
}
static void FUN8()
{
 if(VAR2==5)
 {
 {
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 size_t VAR4 = 0;
 HANDLE VAR5;
 wchar_t * VAR6 = VAR7"";
 wchar_t * VAR8 = VAR7"";
 VAR3[0] = VAR7'';
 if (FUN4(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = VAR7'';
 }
 VAR4 = wcslen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = VAR7'';
 }
 if (FUN5(
 VAR6,
 VAR8,
 VAR3,
 VAR9,
 VAR10,
 &VAR5) != 0)
 {
 FUN2("");
 FUN6(VAR5);
 }
 else
 {
 FUN2("");
 }
 VAR4 = wcslen(VAR3);
 FUN7(VAR3, VAR4 * sizeof(wchar_t));
 }
 }
}
void FUN9()
{
 FUN1();
 FUN8();
}
#endif
