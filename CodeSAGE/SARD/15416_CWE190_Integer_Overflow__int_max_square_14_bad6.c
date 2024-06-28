#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR2 = VAR4;
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
#endif
