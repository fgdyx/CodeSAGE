#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(long * VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR6 = (long *)calloc(100, sizeof(long));
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR6;
}
}
#endif
