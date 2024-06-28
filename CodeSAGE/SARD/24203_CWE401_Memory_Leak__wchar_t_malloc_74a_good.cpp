#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN4(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN5(VAR2<int, wchar_t *> VAR3);
static void FUN6()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN4(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN5(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
