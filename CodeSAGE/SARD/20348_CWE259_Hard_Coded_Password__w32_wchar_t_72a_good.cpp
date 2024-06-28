#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 {
 size_t VAR7 = 0;
 if (FUN3(VAR4, 100, stdin) == NULL)
 {
 FUN4("");
 VAR4[0] = VAR6'';
 }
 VAR7 = wcslen(VAR4);
 if (VAR7 > 0)
 {
 VAR4[VAR7-1] = VAR6'';
 }
 }
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
void FUN7()
{
 FUN2();
}
#endif
