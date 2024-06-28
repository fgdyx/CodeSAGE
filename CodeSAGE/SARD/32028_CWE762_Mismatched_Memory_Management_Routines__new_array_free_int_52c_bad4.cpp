#ifndef VAR1
void FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR2);
}
#endif
