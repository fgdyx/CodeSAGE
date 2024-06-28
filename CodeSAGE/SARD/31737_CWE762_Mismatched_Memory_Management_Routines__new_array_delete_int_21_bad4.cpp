#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR3;
 }
}
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new int[100];
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
