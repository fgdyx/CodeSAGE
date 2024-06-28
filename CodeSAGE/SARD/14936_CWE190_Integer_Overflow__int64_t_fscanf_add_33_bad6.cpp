#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 {
 int64_t VAR2 = VAR4;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
 }
}
#endif
