#ifndef VAR1
void FUN1(short VAR2[]);
void FUN2()
{
 short VAR3;
 short VAR2[5];
 VAR3 = 0;
 /* FLAW: Use a random value that could be less than 0 */
 VAR3 = (short)FUN3();
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
