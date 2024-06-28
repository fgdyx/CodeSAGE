#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 ;
}
void FUN2(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 delete VAR4;
}
#endif
