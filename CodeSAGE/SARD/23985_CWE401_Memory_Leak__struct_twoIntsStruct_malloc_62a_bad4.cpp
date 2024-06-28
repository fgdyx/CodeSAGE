#ifndef VAR1
void FUN1(struct VAR2 * &VAR3);
void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
