#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2[0] = VAR3'';
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR3'', 100-1);
 VAR6[100-1] = VAR3'';
 VAR5 = wcslen(VAR6);
 wcsncat(VAR2, VAR6, VAR5);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
