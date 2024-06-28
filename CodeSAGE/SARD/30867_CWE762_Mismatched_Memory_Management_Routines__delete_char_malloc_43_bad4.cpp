#ifndef VAR1
void FUN1(char * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (char *)malloc(100*sizeof(char));
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
#endif
