#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3)
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
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (wchar_t *)realloc(VAR3, 100*sizeof(wchar_t));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
