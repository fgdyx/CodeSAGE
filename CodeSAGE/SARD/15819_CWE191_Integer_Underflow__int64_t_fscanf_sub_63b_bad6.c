#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 int64_t VAR4 = *VAR3;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int64_t VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
#endif
