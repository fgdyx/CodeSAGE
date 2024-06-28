#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (unsigned int)FUN4();
 VAR3 = VAR2;
 FUN1();
}
#endif
