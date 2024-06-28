#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 {
 int * VAR3 = VAR2;
 int * VAR2 = VAR3;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
