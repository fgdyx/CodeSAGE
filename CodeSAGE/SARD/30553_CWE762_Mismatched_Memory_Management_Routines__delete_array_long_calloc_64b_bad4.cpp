#ifndef VAR1
void FUN1(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR4;
}
#endif
