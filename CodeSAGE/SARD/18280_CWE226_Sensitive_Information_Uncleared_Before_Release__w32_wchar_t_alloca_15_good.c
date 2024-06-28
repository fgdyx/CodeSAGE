#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 wchar_t * VAR2 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 size_t VAR3 = 0;
 HANDLE VAR4;
 wchar_t * VAR5 = VAR6"";
 wchar_t * VAR7 = VAR6"";
 VAR2[0] = VAR6'';
 if (FUN4(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = VAR6'';
 }
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = VAR6'';
 }
 if (FUN5(
 VAR5,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR4) != 0)
 {
 FUN2("");
 FUN6(VAR4);
 }
 else
 {
 FUN2("");
 }
 VAR3 = wcslen(VAR2);
 FUN7(VAR2, VAR3 * sizeof(wchar_t));
 }
 break;
 }
}
static void FUN8()
{
 switch(6)
 {
 case 6:
 {
 wchar_t * VAR2 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 size_t VAR3 = 0;
 HANDLE VAR4;
 wchar_t * VAR5 = VAR6"";
 wchar_t * VAR7 = VAR6"";
 VAR2[0] = VAR6'';
 if (FUN4(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = VAR6'';
 }
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = VAR6'';
 }
 if (FUN5(
 VAR5,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR4) != 0)
 {
 FUN2("");
 FUN6(VAR4);
 }
 else
 {
 FUN2("");
 }
 VAR3 = wcslen(VAR2);
 FUN7(VAR2, VAR3 * sizeof(wchar_t));
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN9()
{
 FUN1();
 FUN8();
}
#endif
