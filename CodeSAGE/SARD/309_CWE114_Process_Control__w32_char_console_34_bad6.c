#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE114_Process_Control__w32_char_console_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR5 = strlen(VAR2);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == '')
 {
 VAR2[VAR5-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR5] = '';
 }
 }
 }
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 HMODULE VAR8;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR8 = LoadLibraryA(VAR2);
 if (VAR8 != NULL)
 {
 FUN3(VAR8);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
 }
}
#endif
