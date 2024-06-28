#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
}
#endif
