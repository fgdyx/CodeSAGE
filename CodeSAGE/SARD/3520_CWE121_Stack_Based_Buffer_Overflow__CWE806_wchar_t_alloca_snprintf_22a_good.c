#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR6[50] = VAR7"";
 FUN4(VAR6, wcslen(VAR4), VAR7"", VAR4);
 FUN5(VAR4);
 }
}
wchar_t * FUN6(wchar_t * VAR4);
static void FUN7()
{
 wchar_t * VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 {
 wchar_t VAR6[50] = VAR7"";
 FUN4(VAR6, wcslen(VAR4), VAR7"", VAR4);
 FUN5(VAR4);
 }
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
