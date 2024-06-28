#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 /* FLAW: Use a small buffer */
 VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
#endif
