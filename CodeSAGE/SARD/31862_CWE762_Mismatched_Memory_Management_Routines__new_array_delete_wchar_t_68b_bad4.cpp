#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR2;
}
#endif
