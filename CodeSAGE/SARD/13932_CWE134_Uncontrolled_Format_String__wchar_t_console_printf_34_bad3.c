#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_console_printf_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR5'')
 {
 VAR2[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR5'';
 }
 }
 }
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR2);
 }
}
#endif
