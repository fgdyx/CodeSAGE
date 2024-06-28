#ifndef VAR1
static void FUN1(short VAR2)
{
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
 short VAR3 = VAR2 * 2;
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
