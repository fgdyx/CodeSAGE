#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new wchar_t[100];
 {
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR2;
 }
}
#endif
