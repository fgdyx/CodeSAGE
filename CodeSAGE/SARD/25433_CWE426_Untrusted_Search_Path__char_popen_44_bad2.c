#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 VAR3 *VAR4;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR4 = FUN2(VAR2, "");
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 }
 }
}
void FUN4()
{
 char * VAR2;
 void (*VAR5) (char *) = VAR6;
 char VAR7[100] = "";
 VAR2 = VAR7;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR8);
 FUN5(VAR2);
}
#endif
