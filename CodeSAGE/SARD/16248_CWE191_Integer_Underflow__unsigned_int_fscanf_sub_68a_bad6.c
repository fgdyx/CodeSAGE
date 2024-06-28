#ifndef VAR1
void FUN1();
void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
