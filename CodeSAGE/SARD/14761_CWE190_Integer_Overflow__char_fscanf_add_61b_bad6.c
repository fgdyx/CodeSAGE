#ifndef VAR1
char FUN1(char VAR2)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 return VAR2;
}
#endif
