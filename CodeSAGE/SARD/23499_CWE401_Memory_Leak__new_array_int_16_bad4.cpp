#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
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
