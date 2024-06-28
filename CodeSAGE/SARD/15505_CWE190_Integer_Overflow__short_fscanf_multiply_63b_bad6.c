#ifndef VAR1
void FUN1(short * VAR2)
{
 short VAR3 = *VAR2;
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
 short VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
#endif
