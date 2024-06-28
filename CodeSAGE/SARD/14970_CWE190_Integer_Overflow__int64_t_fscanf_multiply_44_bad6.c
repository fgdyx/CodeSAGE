#ifndef VAR1
static void FUN1(int64_t VAR2)
{
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int64_t VAR2;
 void (*VAR4) (VAR5) = VAR6;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
#endif
