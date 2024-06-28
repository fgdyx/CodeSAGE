#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_environment_snprintf_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100] = "";
 FUN2(VAR7, 100-1, VAR2);
 FUN3(VAR7);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_environment_snprintf_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR8 = strlen(VAR2);
 char * VAR9 = FUN5(VAR10);
 if (VAR9 != NULL)
 {
 strncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100] = "";
 FUN2(VAR7, 100-1, "", VAR2);
 FUN3(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
