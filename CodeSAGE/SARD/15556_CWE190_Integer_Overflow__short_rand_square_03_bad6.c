#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(5==5)
 {
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (short)FUN2();
 }
 if(5==5)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 }
}
#endif
