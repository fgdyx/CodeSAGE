#ifndef VAR1
void FUN1(CWE114_Process_Control__w32_char_environment_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE114_Process_Control__w32_char_environment_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR2.VAR8 = VAR3;
 FUN1(VAR2);
}
#endif
