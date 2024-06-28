#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR4);
}
#endif
