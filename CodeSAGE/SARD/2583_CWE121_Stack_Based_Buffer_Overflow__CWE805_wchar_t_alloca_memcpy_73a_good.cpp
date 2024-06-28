#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t * VAR5 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR4 = VAR6;
 VAR4[0] = VAR7'';
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
