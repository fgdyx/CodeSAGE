#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR3);
}
#endif
