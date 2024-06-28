#ifndef VAR1
void FUN1(int64_t VAR2[]);
void FUN2()
{
 int64_t VAR3;
 int64_t VAR2[5];
 VAR3 = 0LL;
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (VAR4)FUN3();
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
