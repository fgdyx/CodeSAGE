#ifndef VAR1
static int VAR2 = 0;
static void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR4;
 }
}
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR4 = (VAR3 *)realloc(VAR4, 100*sizeof(VAR3));
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
