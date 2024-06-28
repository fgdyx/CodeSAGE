#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 HMODULE VAR4;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
