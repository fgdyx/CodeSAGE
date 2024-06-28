#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (long *)realloc(VAR2, 100*sizeof(long));
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR2;
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
