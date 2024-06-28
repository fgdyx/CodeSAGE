#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 }
 if(VAR5==5)
 {
 {
 wchar_t VAR7[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR7, 100-1, VAR2);
 FUN5(VAR7);
 }
 }
}
#endif
