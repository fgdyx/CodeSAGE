#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int;
 *VAR2 = 5;
 FUN2(*VAR2);
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
