#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR3 = new VAR2;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 free(VAR3);
 }
}
#endif
