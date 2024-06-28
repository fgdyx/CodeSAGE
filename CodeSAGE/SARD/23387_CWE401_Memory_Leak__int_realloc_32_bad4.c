#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
