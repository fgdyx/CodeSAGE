#ifndef VAR1
void FUN1(VAR2 &VAR3);
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN1(VAR3);
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR3 * 2;
 FUN3(VAR4);
 }
}
#endif
