#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int * VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR6 = (int *)malloc(1*sizeof(int));
}
VAR4::~FUN1()
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR6[0] = 5;
 FUN2(VAR6[0]);
 free(VAR6);
}
}
#endif
