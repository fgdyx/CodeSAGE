#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
