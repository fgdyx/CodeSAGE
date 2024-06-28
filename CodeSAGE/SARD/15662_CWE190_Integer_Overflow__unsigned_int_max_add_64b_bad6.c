#ifndef VAR1
void FUN1(void * VAR2)
{
 unsigned int * VAR3 = (unsigned int *)VAR2;
 unsigned int VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 unsigned int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
}
#endif
