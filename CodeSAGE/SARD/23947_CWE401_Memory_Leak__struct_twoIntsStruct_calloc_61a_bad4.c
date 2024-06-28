#ifndef VAR1
struct VAR2 * FUN1(struct VAR2 * VAR3);
void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
