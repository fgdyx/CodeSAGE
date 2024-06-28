#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_console_printf_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_console_printf_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 if (FUN4(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR5'')
 {
 VAR2[VAR8-1] = VAR5'';
 }
 }
 else
 {
 FUN5("");
 VAR2[VAR8] = VAR5'';
 }
 }
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 FUN2(VAR5"", VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
