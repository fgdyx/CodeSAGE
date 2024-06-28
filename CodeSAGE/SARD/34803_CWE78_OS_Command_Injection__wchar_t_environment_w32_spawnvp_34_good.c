#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnvp_34_unionType VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscat(VAR2, VAR5"");
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t *VAR8[] = {VAR9, VAR10, VAR11, VAR12, NULL};
 FUN2(VAR13, VAR14, VAR8);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
