#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR5);
 }
 {
 VAR6 *VAR7;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR7 = FUN2(VAR2, "");
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 }
 }
}
#endif
