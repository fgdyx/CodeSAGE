#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new long[100];
 }
 else
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR2);
 }
 else
 {
 delete [] VAR2;
 }
}
#endif
