#ifndef VAR1
void FUN1(unsigned int &VAR2)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
}
#endif
