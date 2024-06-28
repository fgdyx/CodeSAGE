#ifndef VAR1
void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
#endif
