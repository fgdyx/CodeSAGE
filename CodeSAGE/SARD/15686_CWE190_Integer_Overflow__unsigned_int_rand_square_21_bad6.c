#ifndef VAR1
static int VAR2 = 0;
static void FUN1(unsigned int VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 }
}
void FUN3()
{
 unsigned int VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a random value */
 VAR3 = (unsigned int)FUN4();
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
