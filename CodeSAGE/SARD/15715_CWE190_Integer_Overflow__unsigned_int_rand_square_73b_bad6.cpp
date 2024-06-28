#ifndef VAR1
void FUN1(VAR2<unsigned int> VAR3)
{
 unsigned int VAR4 = VAR3.FUN2();
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR5 = VAR4 * VAR4;
 FUN3(VAR5);
 }
}
#endif
