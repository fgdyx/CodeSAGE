#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 if (100-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR3+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = wcslen(VAR3);
 if (VAR4 > 0 && VAR3[VAR4-1] == VAR5'')
 {
 VAR3[VAR4-1] = VAR5'';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR4] = VAR5'';
 }
 }
 }
 }
 return VAR3;
}
#endif
