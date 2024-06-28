#ifndef VAR1
static void FUN1()
{
 int64_t VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR5;
 VAR3 = VAR2;
 FUN1();
}
#endif
