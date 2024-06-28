#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new wchar_t[100];
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR2);
}
#endif
