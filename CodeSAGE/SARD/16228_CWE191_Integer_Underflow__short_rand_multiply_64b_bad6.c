#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 if(VAR4 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
 short VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
}
#endif
