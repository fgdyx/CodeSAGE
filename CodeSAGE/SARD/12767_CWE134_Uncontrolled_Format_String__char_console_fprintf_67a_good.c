#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_console_fprintf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_console_fprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__char_console_fprintf_67_structType VAR2);
static void FUN4()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_console_fprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 if (100-VAR6 > 1)
 {
 if (fgets(VAR3+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR3);
 if (VAR6 > 0 && VAR3[VAR6-1] == '')
 {
 VAR3[VAR6-1] = '';
 }
 }
 else
 {
 FUN5("");
 VAR3[VAR6] = '';
 }
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
