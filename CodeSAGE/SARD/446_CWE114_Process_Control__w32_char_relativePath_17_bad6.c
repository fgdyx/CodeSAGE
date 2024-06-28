#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR3, "");
 }
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
