#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int * VAR5) const
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR5[0] = 5;
 FUN2(VAR5[0]);
 free(VAR5);
}
}
#endif
