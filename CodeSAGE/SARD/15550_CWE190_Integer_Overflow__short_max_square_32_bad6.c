#ifndef VAR1
void FUN1()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 }
}
#endif
