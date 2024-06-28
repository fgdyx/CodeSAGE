#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR4 = VAR5;
 {
 size_t VAR8 = wcslen(VAR4);
 if (VAR6-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR4+VAR8, (int)(VAR6-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR4);
 if (VAR8 > 0 && VAR4[VAR8-1] == VAR7'')
 {
 VAR4[VAR8-1] = VAR7'';
 }
 }
 else
 {
 FUN4("");
 VAR4[VAR8] = VAR7'';
 }
 }
 }
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
#endif
