#ifndef VAR1
void FUN1(int64_t VAR2)
{
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
#endif
