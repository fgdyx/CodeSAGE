#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR4;
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
#endif
