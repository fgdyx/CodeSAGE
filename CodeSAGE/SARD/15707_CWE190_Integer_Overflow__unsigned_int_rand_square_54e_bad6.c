#ifndef VAR1
void FUN1(unsigned int VAR2)
{
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
#endif
