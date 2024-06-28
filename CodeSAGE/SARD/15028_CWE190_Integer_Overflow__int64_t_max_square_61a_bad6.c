#ifndef VAR1
VAR2 FUN1(int64_t VAR3);
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = FUN1(VAR3);
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR3 * VAR3;
 FUN3(VAR4);
 }
}
#endif
