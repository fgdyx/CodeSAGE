#ifndef VAR1
void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR3 = (char)VAR2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 short VAR2;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (short)FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 FUN1(VAR2);
}
#endif
