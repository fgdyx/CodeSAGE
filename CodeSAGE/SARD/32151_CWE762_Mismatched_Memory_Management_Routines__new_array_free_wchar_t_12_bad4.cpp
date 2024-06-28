#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new wchar_t[100];
 }
 else
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR2);
 }
 else
 {
 delete [] VAR2;
 }
}
#endif
