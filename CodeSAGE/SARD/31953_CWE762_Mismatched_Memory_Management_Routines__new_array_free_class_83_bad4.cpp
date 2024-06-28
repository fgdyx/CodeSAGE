#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR7 = new VAR5[100];
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 free(VAR7);
}
}
#endif
