#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 {
 int64_t VAR3 = VAR2;
 int64_t VAR2 = VAR3;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 }
}
#endif
