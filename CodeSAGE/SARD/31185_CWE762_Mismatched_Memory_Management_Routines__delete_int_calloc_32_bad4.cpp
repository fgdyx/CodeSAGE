#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)calloc(100, sizeof(int));
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
 }
}
#endif
