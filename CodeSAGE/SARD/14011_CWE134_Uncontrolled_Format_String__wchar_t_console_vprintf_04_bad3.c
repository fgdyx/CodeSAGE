#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 if(VAR6)
 {
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN6(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR5'')
 {
 VAR2[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR7] = VAR5'';
 }
 }
 }
 }
 if(VAR6)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
