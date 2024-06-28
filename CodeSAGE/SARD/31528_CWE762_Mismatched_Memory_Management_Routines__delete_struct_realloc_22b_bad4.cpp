#ifndef VAR1
extern int VAR2;
void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR4;
 }
}
#endif
