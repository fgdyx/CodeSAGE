#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 wcsncpy(VAR2, VAR7, wcslen(VAR7) + 1);
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 if(VAR9)
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 wcsncpy(VAR2, VAR7, wcslen(VAR7) + 1);
 FUN4(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
