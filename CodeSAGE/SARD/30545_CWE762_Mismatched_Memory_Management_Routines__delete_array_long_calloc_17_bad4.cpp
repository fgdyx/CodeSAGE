#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 long * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR4 = (long *)calloc(100, sizeof(long));
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR4;
 }
}
#endif
