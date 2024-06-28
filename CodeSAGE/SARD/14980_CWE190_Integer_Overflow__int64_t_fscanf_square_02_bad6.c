#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(1)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
 int64_t VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 }
}
#endif
