#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)calloc(100, sizeof(int));
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
 break;
 }
}
#endif
