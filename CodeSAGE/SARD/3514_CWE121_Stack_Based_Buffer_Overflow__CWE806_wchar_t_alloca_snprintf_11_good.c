#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 FUN5(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN6(VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(FUN8())
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 FUN5(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN6(VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN7();
}
#endif
