#ifndef VAR1
void FUN1(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 FUN2(VAR4[0]);
}
void FUN3(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 ;
}
#endif
