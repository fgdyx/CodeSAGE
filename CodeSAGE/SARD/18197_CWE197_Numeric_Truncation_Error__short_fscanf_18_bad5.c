#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 /* FLAW: Use a number input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR2;
 FUN2(VAR4);
 }
}
#endif
