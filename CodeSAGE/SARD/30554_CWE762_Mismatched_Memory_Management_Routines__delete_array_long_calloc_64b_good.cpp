#ifndef VAR1
void FUN1(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 delete [] VAR4;
}
void FUN2(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 free(VAR4);
}
#endif
