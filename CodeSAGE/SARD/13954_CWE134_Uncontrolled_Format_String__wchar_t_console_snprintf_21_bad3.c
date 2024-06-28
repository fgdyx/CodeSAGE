#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 wchar_t VAR4[100] = VAR5"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR4, 100-1, VAR3);
 FUN3(VAR4);
 }
 }
}
void FUN4()
{
 wchar_t * VAR3;
 wchar_t VAR6[100] = VAR5"";
 VAR3 = VAR6;
 {
 size_t VAR7 = wcslen(VAR3);
 if (100-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN5(VAR3+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR3);
 if (VAR7 > 0 && VAR3[VAR7-1] == VAR5'')
 {
 VAR3[VAR7-1] = VAR5'';
 }
 }
 else
 {
 FUN6("");
 VAR3[VAR7] = VAR5'';
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
