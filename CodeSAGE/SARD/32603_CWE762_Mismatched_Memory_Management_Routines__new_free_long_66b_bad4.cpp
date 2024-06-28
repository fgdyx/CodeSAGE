#ifndef VAR1
void FUN1(long * VAR2[])
{
 long * VAR3 = VAR2[2];
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 free(VAR3);
}
#endif
