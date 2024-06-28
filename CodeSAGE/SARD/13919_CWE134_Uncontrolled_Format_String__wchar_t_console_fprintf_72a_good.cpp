#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 wcscpy(VAR4, VAR6"");
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
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 {
 size_t VAR7 = wcslen(VAR4);
 if (100-VAR7 > 1)
 {
 if (FUN7(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR4);
 if (VAR7 > 0 && VAR4[VAR7-1] == VAR6'')
 {
 VAR4[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN8("");
 VAR4[VAR7] = VAR6'';
 }
 }
 }
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN5(VAR3);
}
void FUN9()
{
 FUN2();
 FUN6();
}
#endif
