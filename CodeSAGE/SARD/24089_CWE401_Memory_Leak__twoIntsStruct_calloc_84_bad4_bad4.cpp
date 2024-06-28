#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR7 = (VAR5 *)calloc(100, sizeof(VAR5));
 VAR7[0].VAR8 = 0;
 VAR7[0].VAR9 = 0;
 FUN2(&VAR7[0]);
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
}
#endif
