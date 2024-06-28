#ifndef VAR1
void FUN1(void * VAR2)
{
 double * * VAR3 = (double * *)VAR2;
 double * VAR4 = (*VAR3);
 FUN2(*VAR4);
 free(VAR4);
}
#endif
