#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 {
 wchar_t * VAR2 = *VAR3;
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR6[50] = VAR5"";
 wcsncpy(VAR6, VAR2, wcslen(VAR2));
 VAR6[50-1] = VAR5'';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
