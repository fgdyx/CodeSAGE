#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE426_Untrusted_Search_Path__char_popen_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR5);
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 VAR8 *VAR9;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR9 = FUN2(VAR2, "");
 if (VAR9 != NULL)
 {
 FUN3(VAR9);
 }
 }
 }
}
#endif
