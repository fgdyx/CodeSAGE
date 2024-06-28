#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE78_OS_Command_Injection__char_environment_system_34_unionType VAR3;
 char VAR4[100] = VAR5;
 VAR2 = VAR4;
 strcat(VAR2, "");
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
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
