#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
