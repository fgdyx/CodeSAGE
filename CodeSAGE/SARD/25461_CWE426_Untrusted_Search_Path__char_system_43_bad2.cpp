#ifndef VAR1
static void FUN1(char * &VAR2)
{
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR3);
}
void FUN2()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN3(VAR2) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
#endif
