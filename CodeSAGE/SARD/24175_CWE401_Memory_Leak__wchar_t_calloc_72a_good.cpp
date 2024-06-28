#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN4(VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
void FUN7(VAR2<wchar_t *> VAR3);
static void FUN8()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN4(VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN7(VAR3);
}
void FUN9()
{
 FUN2();
 FUN8();
}
#endif
