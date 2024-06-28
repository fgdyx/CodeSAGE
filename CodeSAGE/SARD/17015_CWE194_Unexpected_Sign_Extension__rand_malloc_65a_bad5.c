#ifndef VAR1
void FUN1(short VAR2);
void FUN2()
{
 short VAR2;
 void (*VAR3) (short) = VAR4;
 VAR2 = 0;
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN3();
 FUN4(VAR2);
}
#endif
