#ifndef VAR1
void FUN1()
{
 long * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)calloc(100, sizeof(long));
 VAR3.VAR4 = VAR2;
 {
 long * VAR2 = VAR3.VAR5;
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
 }
}
#endif
