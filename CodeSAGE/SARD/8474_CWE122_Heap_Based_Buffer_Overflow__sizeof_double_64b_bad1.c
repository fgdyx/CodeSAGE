#ifndef VAR1
void FUN1(void * VAR2)
{
 double * * VAR3 = (double * *)VAR2;
 double * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR4);
 free(VAR4);
}
#endif
