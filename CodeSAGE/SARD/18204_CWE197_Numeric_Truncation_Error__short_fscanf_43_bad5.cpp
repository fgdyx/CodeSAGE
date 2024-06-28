#ifndef VAR1
static void FUN1(short &VAR2)
{
 /* FLAW: Use a number input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
}
void FUN2()
{
 short VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR3 = (char)VAR2;
 FUN3(VAR3);
 }
}
#endif
