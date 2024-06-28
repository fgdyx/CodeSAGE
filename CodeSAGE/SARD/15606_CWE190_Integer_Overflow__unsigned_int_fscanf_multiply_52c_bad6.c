#ifndef VAR1
void FUN1(unsigned int VAR2)
{
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
#endif
