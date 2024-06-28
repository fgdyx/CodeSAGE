#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR4 = new int[100];
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR4);
 }
}
#endif
