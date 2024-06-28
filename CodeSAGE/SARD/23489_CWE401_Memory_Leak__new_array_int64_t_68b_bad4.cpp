#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
