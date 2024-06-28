#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0LL;
 {
 int64_t VAR2 = *VAR4;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (VAR3)FUN2();
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR6 = VAR2 * 2;
 FUN3(VAR6);
 }
 }
}
#endif
