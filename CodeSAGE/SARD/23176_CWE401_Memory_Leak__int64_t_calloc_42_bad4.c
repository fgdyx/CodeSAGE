#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 return VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
