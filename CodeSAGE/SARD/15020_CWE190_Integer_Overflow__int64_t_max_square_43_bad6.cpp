#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR3 = VAR4;
}
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN1(VAR3);
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR5 = VAR3 * VAR3;
 FUN3(VAR5);
 }
}
#endif
