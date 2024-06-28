#ifndef VAR1
void FUN1(wchar_t * VAR2[])
{
 wchar_t * VAR3 = VAR2[2];
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR3;
}
#endif
