#ifndef VAR1
extern int VAR2;
void FUN1(int64_t VAR3)
{
 if(VAR2)
 {
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 }
}
#endif
