#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 int64_t VAR4;
 VAR4 = 0LL;
 /* POTENTIAL FLAW: Use a random value */
 VAR4 = (VAR2)FUN3();
 FUN1(&VAR4);
}
#endif
