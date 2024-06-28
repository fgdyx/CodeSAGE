#ifndef VAR1
void FUN1(VAR2 * &VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR3;
}
#endif
