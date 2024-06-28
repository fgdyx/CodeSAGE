#ifndef VAR1
void FUN1(unsigned int VAR2[]);
void FUN2()
{
 unsigned int VAR3;
 unsigned int VAR2[5];
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (unsigned int)FUN3();
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
