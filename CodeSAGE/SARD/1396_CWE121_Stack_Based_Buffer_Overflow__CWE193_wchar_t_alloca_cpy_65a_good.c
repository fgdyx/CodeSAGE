#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3((10)*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN3((10+1)*sizeof(wchar_t));
 VAR2 = VAR6;
 VAR2[0] = VAR7'';
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
