#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
}
#endif
