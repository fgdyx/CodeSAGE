#ifndef VAR1
int VAR2 = 0;
void FUN1(short VAR3);
void FUN2()
{
 short VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
