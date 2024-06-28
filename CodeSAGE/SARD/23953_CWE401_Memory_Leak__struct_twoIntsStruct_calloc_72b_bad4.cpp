#ifndef VAR1
void FUN1(VAR2<struct VAR3 *> VAR4)
{
 struct VAR3 * VAR5 = VAR4[2];
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
