#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR5 = (char)VAR2;
 FUN4(VAR5);
 }
}
#endif
