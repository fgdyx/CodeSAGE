#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 HMODULE VAR4;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN2(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
#endif
