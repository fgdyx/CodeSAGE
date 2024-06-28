#ifndef VAR1
void FUN1(unsigned int VAR2);
void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (unsigned int)FUN3();
 FUN1(VAR2);
}
#endif
