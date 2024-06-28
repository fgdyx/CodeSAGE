#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR5 = (VAR4 *)realloc(VAR5, 100*sizeof(VAR4));
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR5;
 }
}
#endif
