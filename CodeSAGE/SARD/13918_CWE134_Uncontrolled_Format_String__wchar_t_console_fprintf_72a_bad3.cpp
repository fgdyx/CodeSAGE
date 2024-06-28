#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 {
 size_t VAR7 = wcslen(VAR4);
 if (100-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR4);
 if (VAR7 > 0 && VAR4[VAR7-1] == VAR6'')
 {
 VAR4[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN4("");
 VAR4[VAR7] = VAR6'';
 }
 }
 }
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
#endif
