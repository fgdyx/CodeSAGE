#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = VAR6;
 VAR2[0] = VAR7'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 wcsncpy(VAR2, VAR8, 100-1);
 VAR2[100-1] = VAR7'';
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
