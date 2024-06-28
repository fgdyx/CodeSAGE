#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_67_structType VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_67_structType VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_67_structType VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
 size_t VAR7 = wcslen(VAR3);
 if (100-VAR7 > 1)
 {
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
 VAR2.VAR6 = VAR3;
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
