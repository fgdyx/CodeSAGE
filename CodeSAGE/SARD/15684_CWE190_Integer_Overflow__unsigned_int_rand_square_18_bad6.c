#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (unsigned int)FUN2();
 goto VAR4;
VAR4:
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR5 = VAR2 * VAR2;
 FUN3(VAR5);
 }
}
#endif
