#ifndef VAR1
void FUN1(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
}
#endif
