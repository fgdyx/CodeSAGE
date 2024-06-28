#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 FUN2(VAR4[0]);
 free(VAR4);
}
#endif
