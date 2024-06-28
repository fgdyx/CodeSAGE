#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR4);
 {
 char * VAR5 = VAR2;
 char * VAR2 = VAR5;
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
 }
}
#endif
