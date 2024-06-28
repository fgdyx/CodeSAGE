#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN3((10+1)*sizeof(wchar_t));
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 VAR6 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN2();
}
#endif
