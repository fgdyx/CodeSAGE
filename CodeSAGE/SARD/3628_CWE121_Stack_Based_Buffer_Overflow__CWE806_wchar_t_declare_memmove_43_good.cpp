#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 wchar_t VAR5[50] = VAR3"";
 memmove(VAR5, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR5[50-1] = VAR3'';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
