#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
}
#endif
