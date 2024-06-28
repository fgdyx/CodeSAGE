#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 VAR5 *VAR6;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR6 = FUN3(VAR4, "");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
#endif
