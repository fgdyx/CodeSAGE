#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(VAR3[0].VAR5);
 FUN2(VAR3[0].VAR6);
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
