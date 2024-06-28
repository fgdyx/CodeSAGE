#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 unsigned int *VAR3 = &VAR2;
 unsigned int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 unsigned int VAR2 = *VAR3;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (unsigned int)FUN2();
 *VAR3 = VAR2;
 }
 {
 unsigned int VAR2 = *VAR4;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR5 = VAR2 * 2;
 FUN3(VAR5);
 }
 }
}
#endif
