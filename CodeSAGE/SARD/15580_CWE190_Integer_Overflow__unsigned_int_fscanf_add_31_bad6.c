#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 {
 unsigned int VAR3 = VAR2;
 unsigned int VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 unsigned int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
