#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 memmove(VAR6, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(VAR7)
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 memmove(VAR6, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN4(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
