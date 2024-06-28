#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 {
 unsigned int VAR4 = VAR2;
 unsigned int VAR2 = VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
#endif
