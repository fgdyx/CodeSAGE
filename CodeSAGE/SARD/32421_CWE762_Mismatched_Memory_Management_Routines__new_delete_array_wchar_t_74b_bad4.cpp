#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 delete [] VAR4;
}
#endif
