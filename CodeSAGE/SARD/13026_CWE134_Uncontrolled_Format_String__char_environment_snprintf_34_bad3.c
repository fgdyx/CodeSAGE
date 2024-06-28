#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_environment_snprintf_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 char VAR10[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR10, 100-1, VAR2);
 FUN4(VAR10);
 }
 }
}
#endif
