#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6;
 VAR4 = VAR5;
 wcscat(VAR4, VAR7"");
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
