#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5(CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_67_structType VAR4)
{
 char * VAR2 = VAR4.VAR5;
 FUN1(VAR2, VAR2);
}
static void FUN6(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
void FUN7(CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_67_structType VAR4)
{
 char * VAR2 = VAR4.VAR5;
 FUN6(VAR2, VAR2);
}
#endif
