#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN4((10)*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN4((10+1)*sizeof(wchar_t));
 VAR2 = VAR6;
 VAR2[0] = VAR7'';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
