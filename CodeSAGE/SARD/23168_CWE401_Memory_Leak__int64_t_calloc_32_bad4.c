#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
