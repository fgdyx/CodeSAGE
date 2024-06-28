#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 break;
 }
}
#endif
