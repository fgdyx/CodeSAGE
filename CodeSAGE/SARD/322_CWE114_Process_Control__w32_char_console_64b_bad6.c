#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 HMODULE VAR5;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR5 = LoadLibraryA(VAR4);
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
