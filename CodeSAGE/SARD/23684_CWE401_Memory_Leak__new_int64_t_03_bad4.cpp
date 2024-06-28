#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
