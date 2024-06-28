#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR4;
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
#endif
