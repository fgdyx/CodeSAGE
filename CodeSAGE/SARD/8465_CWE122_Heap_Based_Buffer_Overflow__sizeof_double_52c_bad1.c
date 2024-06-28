#ifndef VAR1
void FUN1(double * VAR2)
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR2);
 free(VAR2);
}
#endif
