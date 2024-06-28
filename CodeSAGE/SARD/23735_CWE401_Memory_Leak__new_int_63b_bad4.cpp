#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
