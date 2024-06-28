#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new VAR2[100];
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR3;
 }
}
#endif
