#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR5, VAR3);
}
#endif
