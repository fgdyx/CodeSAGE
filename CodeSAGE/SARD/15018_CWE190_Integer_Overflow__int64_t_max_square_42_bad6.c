#ifndef VAR1
static VAR2 FUN1(int64_t VAR3)
{
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR3 = VAR4;
 return VAR3;
}
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = FUN1(VAR3);
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR5 = VAR3 * VAR3;
 FUN3(VAR5);
 }
}
#endif
