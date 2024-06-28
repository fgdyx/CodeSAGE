#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 if(VAR7)
 {
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN6(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR6'')
 {
 VAR2[VAR8-1] = VAR6'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR8] = VAR6'';
 }
 }
 }
 }
 if(VAR7)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
