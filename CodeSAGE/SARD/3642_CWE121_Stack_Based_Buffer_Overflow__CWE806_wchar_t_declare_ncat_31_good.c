#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 {
 wchar_t VAR6[50] = VAR4"";
 wcsncat(VAR6, VAR2, wcslen(VAR2));
 VAR6[50-1] = VAR4'';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
