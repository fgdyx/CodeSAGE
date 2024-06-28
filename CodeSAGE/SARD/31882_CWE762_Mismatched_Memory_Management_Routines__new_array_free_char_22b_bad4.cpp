#ifndef VAR1
extern int VAR2;
void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR3);
 }
}
#endif
