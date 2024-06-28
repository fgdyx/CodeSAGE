#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 VAR4 *VAR5;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR5 = FUN2(VAR3, "");
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
 }
 }
}
#endif
