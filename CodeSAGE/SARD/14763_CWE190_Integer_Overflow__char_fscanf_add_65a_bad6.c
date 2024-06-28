#ifndef VAR1
void FUN1(char VAR2);
void FUN2()
{
 char VAR2;
 void (*VAR3) (char) = VAR4;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN3(VAR2);
}
#endif
