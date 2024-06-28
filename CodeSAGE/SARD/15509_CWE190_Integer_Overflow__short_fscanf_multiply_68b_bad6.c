#ifndef VAR1
void FUN1()
{
 short VAR2 = VAR3;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
 short VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
#endif
