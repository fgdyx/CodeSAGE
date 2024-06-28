#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 wchar_t VAR5[100];
 VAR4 = VAR5;
 wcscpy(VAR4, VAR6"");
 FUN3(VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
void FUN6(VAR2<wchar_t *> VAR3);
static void FUN7()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = new wchar_t[100];
 wcscpy(VAR4, VAR6"");
 FUN3(VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN6(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
