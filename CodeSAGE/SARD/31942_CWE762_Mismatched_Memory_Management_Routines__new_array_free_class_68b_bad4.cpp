#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR3);
}
#endif
