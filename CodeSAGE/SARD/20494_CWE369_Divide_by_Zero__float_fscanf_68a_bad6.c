#ifndef VAR1
void FUN1();
void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
