#ifndef VAR1
void FUN1(int64_t VAR2[])
{
 int64_t VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
}
#endif
