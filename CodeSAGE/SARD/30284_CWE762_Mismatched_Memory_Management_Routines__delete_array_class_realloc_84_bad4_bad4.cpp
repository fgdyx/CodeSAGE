#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR7 = (VAR5 *)realloc(VAR7, 100*sizeof(VAR5));
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR7;
}
}
#endif
