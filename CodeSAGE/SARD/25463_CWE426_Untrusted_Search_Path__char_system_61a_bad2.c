#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN3(VAR2) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
#endif
