#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
}
#endif
