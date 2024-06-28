#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 *VAR5;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR5 = FUN2(VAR2, "");
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
 }
 }
}
void FUN4()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR7);
 VAR3 = VAR2;
 FUN1();
}
#endif
