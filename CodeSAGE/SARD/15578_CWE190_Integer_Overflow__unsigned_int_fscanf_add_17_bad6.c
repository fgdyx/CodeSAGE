#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 unsigned int VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 unsigned int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
 }
}
#endif
