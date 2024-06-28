#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
