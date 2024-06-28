#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR3;
 }
}
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (int *)malloc(100*sizeof(int));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
