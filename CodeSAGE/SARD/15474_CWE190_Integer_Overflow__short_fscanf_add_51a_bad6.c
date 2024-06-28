#ifndef VAR1
void FUN1(short VAR2);
void FUN2()
{
 short VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
