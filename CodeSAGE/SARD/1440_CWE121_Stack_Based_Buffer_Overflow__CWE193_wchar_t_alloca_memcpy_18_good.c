#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 goto VAR5;
VAR5:
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 {
 wchar_t VAR5[10+1] = VAR7;
 memcpy(VAR2, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
