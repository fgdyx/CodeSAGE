#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 VAR6 = wcslen(VAR7);
 wcsncat(VAR2, VAR7, VAR6);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
