#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
 }
}
#endif
