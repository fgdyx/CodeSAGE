#ifndef VAR1
void FUN1()
{
 int64_t VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int64_t VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
}
#endif
