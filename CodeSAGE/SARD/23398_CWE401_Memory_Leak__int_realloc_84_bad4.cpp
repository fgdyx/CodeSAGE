#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int * VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR6 = (int *)realloc(VAR6, 100*sizeof(int));
 VAR6[0] = 5;
 FUN2(VAR6[0]);
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
}
#endif
