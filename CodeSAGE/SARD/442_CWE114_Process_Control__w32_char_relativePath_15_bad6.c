#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR2, "");
 break;
 default:
 FUN2("");
 break;
 }
 {
 HMODULE VAR4;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
