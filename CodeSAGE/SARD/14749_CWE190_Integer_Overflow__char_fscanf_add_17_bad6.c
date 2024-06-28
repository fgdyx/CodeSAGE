#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 char VAR4;
 VAR4 = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
 }
}
#endif
