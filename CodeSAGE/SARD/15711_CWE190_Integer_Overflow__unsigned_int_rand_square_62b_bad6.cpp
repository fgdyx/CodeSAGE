#ifndef VAR1
void FUN1(unsigned int &VAR2)
{
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (unsigned int)FUN2();
}
#endif
