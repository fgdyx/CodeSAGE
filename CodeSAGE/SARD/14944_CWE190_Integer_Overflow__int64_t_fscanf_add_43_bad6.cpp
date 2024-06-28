#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
}
void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN1(VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR4 = VAR3 + 1;
 FUN3(VAR4);
 }
}
#endif
