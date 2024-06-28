#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 if (VAR5-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR3+VAR4, (int)(VAR5-VAR4), stdin) != NULL)
 {
 VAR4 = wcslen(VAR3);
 if (VAR4 > 0 && VAR3[VAR4-1] == VAR6'')
 {
 VAR3[VAR4-1] = VAR6'';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR4] = VAR6'';
 }
 }
 }
 }
 return VAR3;
}
#endif
