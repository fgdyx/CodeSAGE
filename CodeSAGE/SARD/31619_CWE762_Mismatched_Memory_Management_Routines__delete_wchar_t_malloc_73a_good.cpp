#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = new wchar_t;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4(VAR2<wchar_t *> VAR3);
static void FUN5()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
