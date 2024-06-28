#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN5(CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_67_structType VAR6)
{
 wchar_t * VAR2 = VAR6.VAR7;
 FUN1(VAR2, VAR2);
}
static void FUN6(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR4"", VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN7(CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_67_structType VAR6)
{
 wchar_t * VAR2 = VAR6.VAR7;
 FUN6(VAR2, VAR2);
}
#endif
