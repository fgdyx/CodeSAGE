#ifndef VAR1
void FUN1(float VAR2[]);
void FUN2()
{
 float VAR3;
 float VAR2[5];
 VAR3 = 0.0F;
 /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
 VAR3 = (float)FUN3();
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
