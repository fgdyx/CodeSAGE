#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcsncpy(VAR5, VAR2, wcslen(VAR5));
 VAR5[100-1] = VAR4'';
 FUN3(VAR5);
 }
}
void FUN4()
{
 FUN2();
}
#endif
