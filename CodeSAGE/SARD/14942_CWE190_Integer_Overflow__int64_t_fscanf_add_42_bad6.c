#ifndef VAR1
static VAR2 FUN1(int64_t VAR3)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 return VAR3;
}
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = FUN1(VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR4 = VAR3 + 1;
 FUN3(VAR4);
 }
}
#endif
