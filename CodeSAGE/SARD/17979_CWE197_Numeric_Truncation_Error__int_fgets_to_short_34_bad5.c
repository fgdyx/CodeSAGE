#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE197_Numeric_Truncation_Error__int_fgets_to_short_34_unionType VAR3;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR6 = VAR2;
 {
 int VAR2 = VAR3.VAR7;
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR8 = (short)VAR2;
 FUN4(VAR8);
 }
 }
}
#endif
