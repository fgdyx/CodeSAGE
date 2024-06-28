#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = FUN3(VAR4);
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
