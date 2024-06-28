#ifndef VAR1
static int * FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)calloc(100, sizeof(int));
 return VAR2;
}
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
}
#endif
