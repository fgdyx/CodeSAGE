#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR3[] = VAR4"";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = FUN3(VAR3);
 }
 FUN1(VAR2);
}
#endif
