#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
