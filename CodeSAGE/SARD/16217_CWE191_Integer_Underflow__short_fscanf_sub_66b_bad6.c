#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 short VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
#endif
