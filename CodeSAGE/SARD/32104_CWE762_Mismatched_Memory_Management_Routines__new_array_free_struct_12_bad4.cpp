#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new VAR2[100];
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR3);
 }
 else
 {
 delete [] VAR3;
 }
}
#endif
