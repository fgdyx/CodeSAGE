#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 {
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
