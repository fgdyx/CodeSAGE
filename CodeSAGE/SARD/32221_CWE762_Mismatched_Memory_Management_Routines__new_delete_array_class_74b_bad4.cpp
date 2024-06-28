#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to delete to deallocate the memory */
 delete [] VAR5;
}
#endif
