#ifndef VAR1
short FUN1(short VAR2)
{
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
 return VAR2;
}
#endif
