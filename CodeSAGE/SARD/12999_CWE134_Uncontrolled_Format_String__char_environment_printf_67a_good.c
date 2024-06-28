#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType VAR2);
static void FUN4()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 char * VAR7 = FUN5(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR3+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR2.VAR5 = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
