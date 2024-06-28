#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 }
 {
 HMODULE VAR7;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR7 = LoadLibraryA(VAR2);
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
