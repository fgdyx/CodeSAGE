#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0LL;
 {
 int64_t VAR2 = *VAR4;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR6;
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR7 = VAR2 + 1;
 FUN2(VAR7);
 }
 }
}
#endif
