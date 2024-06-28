#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR3;
 }
}
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 {
 char VAR4[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = strdup(VAR4);
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
