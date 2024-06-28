#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR4);
}
#endif
