#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN2(VAR4);
 }
 {
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
 }
}
#endif
