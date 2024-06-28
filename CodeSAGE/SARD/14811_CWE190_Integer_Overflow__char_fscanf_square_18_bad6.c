#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 goto VAR4;
VAR4:
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
}
#endif
