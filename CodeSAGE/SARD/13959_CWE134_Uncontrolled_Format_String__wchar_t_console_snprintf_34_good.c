#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[100] = VAR5"";
 FUN2(VAR8, 100-1, VAR2);
 FUN3(VAR8);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR9 = wcslen(VAR2);
 if (100-VAR9 > 1)
 {
 if (FUN5(VAR2+VAR9, (int)(100-VAR9), stdin) != NULL)
 {
 VAR9 = wcslen(VAR2);
 if (VAR9 > 0 && VAR2[VAR9-1] == VAR5'')
 {
 VAR2[VAR9-1] = VAR5'';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR9] = VAR5'';
 }
 }
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[100] = VAR5"";
 FUN2(VAR8, 100-1, VAR5"", VAR2);
 FUN3(VAR8);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
}
#endif
