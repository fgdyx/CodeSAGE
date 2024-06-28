#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new char[100];
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR2);
 }
}
#endif
