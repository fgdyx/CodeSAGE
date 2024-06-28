#ifndef VAR1
void FUN1(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
#endif
