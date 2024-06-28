#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 VAR4 = new wchar_t[100];
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
void FUN5(VAR2<wchar_t *> VAR3);
static void FUN6()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 {
 wchar_t VAR5[] = VAR6"";
 VAR4 = FUN7(VAR5);
 }
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN5(VAR3);
}
void FUN8()
{
 FUN2();
 FUN6();
}
#endif
