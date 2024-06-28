#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 {
 HMODULE VAR8;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR8 = LoadLibraryA(VAR2);
 if (VAR8 != NULL)
 {
 FUN3(VAR8);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
