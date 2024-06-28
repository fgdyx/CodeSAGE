#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(long * VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR6 = new long[100];
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR6);
}
}
#endif
