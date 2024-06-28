#ifndef VAR1
void FUN1(structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR3;
}
#endif
