#ifndef VAR1
void FUN1(int64_t VAR2);
void FUN2()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (VAR3)FUN3();
 FUN1(VAR2);
}
#endif
