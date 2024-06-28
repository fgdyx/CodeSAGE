#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 short VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (short)FUN3();
 FUN1(&VAR3);
}
#endif
