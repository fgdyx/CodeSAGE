#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 int64_t VAR4 = *VAR3;
 if(VAR4 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
}
#endif
