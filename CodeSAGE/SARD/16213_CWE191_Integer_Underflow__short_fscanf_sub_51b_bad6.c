#ifndef VAR1
void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 short VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
#endif
