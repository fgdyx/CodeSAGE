#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char VAR3;
 VAR3 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 FUN1(&VAR3);
}
#endif
