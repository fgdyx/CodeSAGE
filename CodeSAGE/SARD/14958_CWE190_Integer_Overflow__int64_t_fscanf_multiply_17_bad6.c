#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int64_t VAR4;
 VAR4 = 0LL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if(VAR4 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
 }
}
#endif
