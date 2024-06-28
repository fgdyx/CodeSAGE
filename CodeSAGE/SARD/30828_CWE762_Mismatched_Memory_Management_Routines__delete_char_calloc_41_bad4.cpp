#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (char *)calloc(100, sizeof(char));
 FUN1(VAR2);
}
#endif
