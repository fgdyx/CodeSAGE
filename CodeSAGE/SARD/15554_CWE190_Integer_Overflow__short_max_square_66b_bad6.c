#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
}
#endif
