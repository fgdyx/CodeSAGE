#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
}
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR3 = VAR2;
 FUN1();
}
#endif
