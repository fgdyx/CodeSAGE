#ifndef VAR1
void FUN1()
{
 int VAR2;
 short VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Use a number input from the console using fscanf() */
 fscanf (stdin, "", &VAR3);
 }
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR3;
 FUN2(VAR4);
 }
}
#endif
