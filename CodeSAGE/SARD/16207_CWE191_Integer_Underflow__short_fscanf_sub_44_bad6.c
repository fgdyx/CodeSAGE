#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 short VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
#endif
