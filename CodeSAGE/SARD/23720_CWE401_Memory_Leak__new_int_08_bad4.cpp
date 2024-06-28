#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int;
 *VAR2 = 5;
 FUN3(*VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
