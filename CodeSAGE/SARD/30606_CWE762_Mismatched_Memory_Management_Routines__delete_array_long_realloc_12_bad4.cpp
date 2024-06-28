#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)realloc(VAR2, 100*sizeof(long));
 }
 else
 {
 VAR2 = new long[100];
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
 }
 else
 {
 free(VAR2);
 }
}
#endif
