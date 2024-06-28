#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 goto VAR4;
VAR4:
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 short VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
}
#endif
