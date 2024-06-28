#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
#endif
