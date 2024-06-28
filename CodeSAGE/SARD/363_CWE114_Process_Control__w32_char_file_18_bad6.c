#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN2("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 {
 HMODULE VAR9;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR9 = LoadLibraryA(VAR2);
 if (VAR9 != NULL)
 {
 FUN3(VAR9);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
