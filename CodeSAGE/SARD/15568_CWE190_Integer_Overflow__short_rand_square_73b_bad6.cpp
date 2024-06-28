#ifndef VAR1
void FUN1(VAR2<short> VAR3)
{
 short VAR4 = VAR3.FUN2();
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR5 = VAR4 * VAR4;
 FUN3(VAR5);
 }
}
#endif
