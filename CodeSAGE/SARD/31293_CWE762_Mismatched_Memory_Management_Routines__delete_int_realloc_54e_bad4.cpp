#ifndef VAR1
void FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
#endif
