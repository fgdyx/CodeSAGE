#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new wchar_t;
 return VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 free(VAR2);
}
#endif
