#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(&VAR3[0]);
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
