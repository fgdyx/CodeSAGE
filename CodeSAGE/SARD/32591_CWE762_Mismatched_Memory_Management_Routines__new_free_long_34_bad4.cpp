#ifndef VAR1
void FUN1()
{
 long * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new long;
 VAR3.VAR4 = VAR2;
 {
 long * VAR2 = VAR3.VAR5;
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 free(VAR2);
 }
}
#endif
