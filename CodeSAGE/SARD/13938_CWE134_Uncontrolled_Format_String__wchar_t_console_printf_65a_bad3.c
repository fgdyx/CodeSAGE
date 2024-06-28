#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR6'')
 {
 VAR2[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR7] = VAR6'';
 }
 }
 }
 FUN5(VAR2);
}
#endif
