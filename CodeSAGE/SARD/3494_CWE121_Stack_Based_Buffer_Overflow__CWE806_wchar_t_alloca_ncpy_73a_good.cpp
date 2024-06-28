#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR4 = VAR5;
 wmemset(VAR4, VAR6'', 50-1);
 VAR4[50-1] = VAR6'';
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
