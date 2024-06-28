#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100] = VAR6"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR5, 100-1, VAR3);
 FUN3(VAR5);
 }
}
#endif
