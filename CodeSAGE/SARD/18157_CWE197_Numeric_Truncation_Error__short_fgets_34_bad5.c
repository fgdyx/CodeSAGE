#ifndef VAR1
void FUN1()
{
 short VAR2;
 CWE197_Numeric_Truncation_Error__short_fgets_34_unionType VAR3;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR6 = VAR2;
 {
 short VAR2 = VAR3.VAR7;
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR8 = (char)VAR2;
 FUN4(VAR8);
 }
 }
}
#endif
