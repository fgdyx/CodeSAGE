#ifndef VAR1
void FUN1()
{
 char VAR2;
 char *VAR3 = &VAR2;
 char *VAR4 = &VAR2;
 VAR2 = '';
 {
 char VAR2 = *VAR3;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 *VAR3 = VAR2;
 }
 {
 char VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
 }
}
#endif
