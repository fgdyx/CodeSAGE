#ifndef VAR1
void FUN1(structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
