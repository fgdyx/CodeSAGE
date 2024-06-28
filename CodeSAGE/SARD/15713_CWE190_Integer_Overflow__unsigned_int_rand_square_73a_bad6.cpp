#ifndef VAR1
void FUN1(VAR2<unsigned int> VAR3);
void FUN2()
{
 unsigned int VAR4;
 VAR2<unsigned int> VAR3;
 VAR4 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR4 = (unsigned int)FUN3();
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
