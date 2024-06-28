#ifndef VAR1
void FUN1();
void FUN2()
{
 short VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (short)FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 VAR5 = VAR2;
 FUN1();
}
#endif
