#ifndef VAR1
void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
#endif
