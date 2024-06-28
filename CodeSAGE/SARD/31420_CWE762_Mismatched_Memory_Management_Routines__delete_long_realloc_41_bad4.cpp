#ifndef VAR1
static void FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)realloc(VAR2, 100*sizeof(long));
 FUN1(VAR2);
}
#endif
