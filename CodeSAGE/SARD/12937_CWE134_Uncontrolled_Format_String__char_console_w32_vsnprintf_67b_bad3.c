#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
void FUN5(CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_67_structType VAR5)
{
 char * VAR2 = VAR5.VAR6;
 FUN1(VAR2, VAR2);
}
#endif
