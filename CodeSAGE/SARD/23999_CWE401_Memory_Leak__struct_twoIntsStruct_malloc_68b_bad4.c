#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
