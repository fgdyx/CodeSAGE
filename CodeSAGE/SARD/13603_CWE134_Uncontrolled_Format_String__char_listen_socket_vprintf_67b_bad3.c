#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5(CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_67_structType VAR4)
{
 char * VAR2 = VAR4.VAR5;
 FUN1(VAR2, VAR2);
}
#endif
