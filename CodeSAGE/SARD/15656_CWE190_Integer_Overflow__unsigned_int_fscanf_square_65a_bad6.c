#ifndef VAR1
void FUN1(unsigned int VAR2);
void FUN2()
{
 unsigned int VAR2;
 void (*VAR3) (unsigned int) = VAR4;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN3(VAR2);
}
#endif
