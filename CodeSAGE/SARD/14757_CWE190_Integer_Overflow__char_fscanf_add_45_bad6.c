#ifndef VAR1
static void FUN1()
{
 char VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
}
void FUN3()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
