#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 wcscat(VAR2, VAR4);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
