#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new int[100];
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR2;
}
#endif
