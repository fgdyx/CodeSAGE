#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
#endif
