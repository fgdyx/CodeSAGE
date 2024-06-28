#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = strdup(VAR3);
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
 }
}
#endif
