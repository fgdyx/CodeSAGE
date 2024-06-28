#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 }
}
#endif
