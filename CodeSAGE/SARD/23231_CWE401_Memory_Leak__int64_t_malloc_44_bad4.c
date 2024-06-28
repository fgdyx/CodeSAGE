#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 FUN4(VAR3);
}
#endif
