#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0LL;
 {
 int64_t VAR2 = *VAR4;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int64_t VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 }
}
#endif
