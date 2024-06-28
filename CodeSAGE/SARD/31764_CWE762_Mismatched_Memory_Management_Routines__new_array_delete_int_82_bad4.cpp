#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int * VAR5)
{
 /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
 * require a call to delete [] to deallocate the memory */
 delete VAR5;
}
}
#endif
