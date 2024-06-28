#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
