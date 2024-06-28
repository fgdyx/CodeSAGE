#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 wmemset(VAR5, VAR7'', 50-1);
 VAR5[50-1] = VAR7'';
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = VAR6;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 memmove(VAR8, VAR2, wcslen(VAR8)*sizeof(wchar_t));
 VAR8[100-1] = VAR7'';
 FUN2(VAR8);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
