#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(1)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
