#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
