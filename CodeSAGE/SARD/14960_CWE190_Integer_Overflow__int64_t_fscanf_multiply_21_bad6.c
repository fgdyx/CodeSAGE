#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int64_t VAR3)
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
void FUN3()
{
 int64_t VAR3;
 VAR3 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
