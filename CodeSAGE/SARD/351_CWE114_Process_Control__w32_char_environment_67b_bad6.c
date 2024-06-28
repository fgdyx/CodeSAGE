#ifndef VAR1
void FUN1(CWE114_Process_Control__w32_char_environment_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 HMODULE VAR5;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR5 = LoadLibraryA(VAR3);
 if (VAR5 != NULL)
 {
 FUN2(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
