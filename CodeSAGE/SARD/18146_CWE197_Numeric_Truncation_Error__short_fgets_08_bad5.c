#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = -1;
 if(FUN2())
 {
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
 }
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR5 = (char)VAR2;
 FUN5(VAR5);
 }
}
#endif
