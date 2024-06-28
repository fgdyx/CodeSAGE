#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE78_OS_Command_Injection__wchar_t_connect_socket_system_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5;
 VAR2 = VAR4;
 wcscat(VAR2, VAR6"");
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
 }
}
void FUN5()
{
 FUN1();
}
#endif
