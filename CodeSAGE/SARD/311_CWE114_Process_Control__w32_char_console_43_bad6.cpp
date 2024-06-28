#ifndef VAR1
static void FUN1(char * &VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 if (100-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR3, (int)(100-VAR3), stdin) != NULL)
 {
 VAR3 = strlen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == '')
 {
 VAR2[VAR3-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR3] = '';
 }
 }
 }
}
void FUN3()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 HMODULE VAR5;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR5 = LoadLibraryA(VAR2);
 if (VAR5 != NULL)
 {
 FUN4(VAR5);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
