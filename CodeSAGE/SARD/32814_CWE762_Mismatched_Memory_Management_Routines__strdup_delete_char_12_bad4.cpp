#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR3);
 }
 }
 else
 {
 VAR2 = new char;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete VAR2;
 }
 else
 {
 free(VAR2);
 }
}
#endif
