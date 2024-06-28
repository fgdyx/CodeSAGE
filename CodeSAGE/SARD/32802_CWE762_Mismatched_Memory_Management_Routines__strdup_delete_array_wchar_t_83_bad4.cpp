#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 {
 wchar_t VAR7[] = VAR8"";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR6 = FUN2(VAR7);
 }
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
 * require a call to free() to deallocate the memory */
 delete [] VAR6;
}
}
#endif
