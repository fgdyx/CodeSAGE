#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 wcsncpy(VAR2, VAR3, 100-1);
 VAR2[100-1] = VAR4'';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
