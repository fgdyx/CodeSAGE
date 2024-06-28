#ifndef VAR1
void FUN1(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(VAR4[0]);
}
#endif
