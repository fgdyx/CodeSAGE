#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR4 = strlen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR2[VAR4] = '';
 }
 fclose(VAR6);
 }
 }
 }
 }
 else
 {
 strcpy(VAR2, "");
 }
 {
 HMODULE VAR8;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR8 = LoadLibraryA(VAR2);
 if (VAR8 != NULL)
 {
 FUN4(VAR8);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
