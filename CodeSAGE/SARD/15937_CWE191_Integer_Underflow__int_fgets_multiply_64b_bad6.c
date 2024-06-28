#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 if(VAR4 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
}
#endif
