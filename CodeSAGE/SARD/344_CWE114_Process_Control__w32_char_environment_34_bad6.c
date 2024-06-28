#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE114_Process_Control__w32_char_environment_34_unionType VAR3;
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
 HMODULE VAR10;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR10 = LoadLibraryA(VAR2);
 if (VAR10 != NULL)
 {
 FUN3(VAR10);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
