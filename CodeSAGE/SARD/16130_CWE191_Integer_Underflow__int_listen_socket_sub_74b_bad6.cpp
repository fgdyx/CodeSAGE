#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
#endif
