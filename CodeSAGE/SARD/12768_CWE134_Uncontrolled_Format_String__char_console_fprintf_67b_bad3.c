#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_console_fprintf_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR5, VAR3);
}
#endif
