#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(VAR7==5)
 {
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN6(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR4'')
 {
 VAR2[VAR8-1] = VAR4'';
 }
 }
 else
 {
 FUN7("");
 VAR2[VAR8] = VAR4'';
 }
 }
 }
 }
 if(VAR7==5)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
