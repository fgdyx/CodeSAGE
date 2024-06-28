#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 short VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
#endif
