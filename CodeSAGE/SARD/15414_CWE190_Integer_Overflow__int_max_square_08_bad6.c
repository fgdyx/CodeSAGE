#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR2 = VAR3;
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR4 = VAR2 * VAR2;
 FUN3(VAR4);
 }
 }
}
#endif
